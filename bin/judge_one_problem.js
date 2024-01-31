// 评测单个题目
const { join, resolve, dirname, basename, extname } = require("path")
const { statSync, readFileSync, readdirSync, existsSync, writeFileSync, appendFileSync } = require("fs")
const { execSync, exec, spawnSync } = require("child_process")
const getDataList = require("./getDataList")

// 全局变量

function get_problem_info(problem_path) {
    let info_path = join(problem_path, 'config.json')
    let info = {}
    if( existsSync( info_path ) )
        info = JSON.parse(readFileSync(info_path, { encoding: 'utf8' }))
    let data = []

    if( existsSync(join(problem_path, 'data'))) {
        problem_path = join(problem_path, 'data')
    }

    let {both_list}= getDataList(problem_path)

    data = both_list.map( d => [
        join(problem_path,d[0]),
        join(problem_path,d[1])
    ] )

    return {
        problem_path,
        ...info,
        data
    }
}

function judge_result_id_to_str() {
    // SUCCESS             = 0,  // 运行正常
    // CPU_TIME_LIMIT_EXCEEDED  = 1, // 超时
    // REAL_TIME_LIMIT_EXCEEDED = 2,// 超时
    // MEMORY_LIMIT_EXCEEDED    = 3, // 超内存
    // RUNTIME_ERROR            = 4, // 运行错误
    // SYSTEM_ERROR             = 5, // 系统错误
    // WAIT_FAILED         = 6,
    // INVALID_CONFIG      = 7,
    // FORK_FAILED         = 8,
    // PTHREAD_FAILED      = 9,
    // ROOT_REQUIRED       = 10,
    // LOAD_SECCOMP_FAILED = 11,
    // SETRLIMIT_FAILED    = 12,
    // DUP2_FAILED         = 13,
    // SETUID_FAILED       = 14,
    // EXECVE_FAILED       = 15,
    // SPJ_ERROR           = 16,
    // COMPILE_FAIL        = 17 // TODO
};
const result_id_str = [
    'AC', // 0
    'TLE', // 1
    'TLE', // 2
    'MLT', // 3
    'RE', // 4
    'SE', // 5
    'SE', // 7
    'SE', // 8
    'SE', // 9
    'SE', // 10
    'SE', // 11
    'SE', // 12
    'SE', // 13
    'SE', // 14
    'SE', // 15
    'SE', // 16
    'SE', // 17
]



//编译
function compile(cppfile, CWD) {
    let exeCWD = dirname(cppfile)
    // console.log(exeCWD,cppfile)
    let out_name = join(CWD, basename(cppfile).split('.')[0])
    try {
        execSync(`g++ -o "${out_name}" ${cppfile}`, {
            cwd: exeCWD,
            stdio: [0, 1, 'ignore']
        })
        return out_name
    }
    catch {
        return null
    }
}

//执行代码
function run(exe_path, user_out, in_file) {
    // console.log(exe_path, user_out, in_file)
    const result = spawnSync('/usr/bin/sjudge', [
        "--max-cpu-time", 1,
        "--max-real-time", 2,
        "--max-memory", 512,
        "--max-stack", 512,
        "--cwd", dirname(exe_path),
        "--exe", exe_path,
        "--input", in_file,
        "--output", user_out,
        "--error", "err.txt",
        "--args", exe_path,
        "--log", "contest_log.txt",
    ], {
        cwd: dirname(exe_path),
        shell: true,
        encoding: 'utf8'
    })
    return result.stdout
}



//比较文件是否一样
// 一样 返回true
function compare(user_out, out_file, CWD) {
    try {
        // console.log(`diff --strip-trailing-cr ${user_out} ${out_file}`)
        execSync(`/usr/bin/diff -B -b --strip-trailing-cr "${user_out}" "${out_file}"`, {
            cwd: '/tmp',
            encoding: 'utf-8',
            stdio: 'ignore'
        })
        return 1
    }
    catch (error) {
        // console.log(error)
        return 0;
    }
}

//返回结果
function judge_one_problem(code_path, problem_path, CWD) {
    //得到数据
    CWD = CWD || dirname(code_path)
    let pinfo = get_problem_info(problem_path)
    // console.log(pinfo)

    //编译
    let results = []
    const exe_path = compile(code_path, CWD)
    if (!exe_path) {
        // console.log('编译失败')
        return ['CE']
    }
    // console.log(`编译 ${basename(code_path)} 成功`)
    //比较每一个数据
    for (let [in_file, out_file] of pinfo.data) {
        let str = '';
        let user_out = 'user.out'
        // console.log(in_file, out_file)
        let out = run(exe_path, user_out, in_file)
        let out_json = JSON.parse(out)
        // console.log(out_json)
        if (out_json.result != 0) { // 执行失败
            if (out_json.result >= 0 && out_json.result < result_id_str.length)
            {
                str = result_id_str[out_json.result]
                // console.log('str',str)
            }
            else
                str = 'UE' //unknown error
        }
        else if (!compare(user_out, out_file, CWD)) {
            str = 'WA'
        }
        else str = 'AC'
        results.push(str)
    }
    return results
}

module.exports = judge_one_problem