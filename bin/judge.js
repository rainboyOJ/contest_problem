//对某个比赛进行评测

const { join, resolve, dirname, basename, extname, isAbsolute } = require("path")
const { statSync, readFileSync, readdirSync, existsSync, writeFileSync, appendFileSync } = require("fs")
const { execSync } = require("child_process")
const jsyaml = require("js-yaml")
const judge_one_problem = require("./judge_one_problem.js")

function print_usage() {
    console.log(
        `Usage: node bin/judge.js contest_id
example: node bin/judge.js 24\n`)
}

function load_yaml(yaml_path) {
    return jsyaml.load(readFileSync(yaml_path, { encoding: 'utf-8' }))
}

function get_users_info(user_info_path) {
    return load_yaml(user_info_path)
}

if (process.argv.length != 3) {
    print_usage()
    process.exit();
}

// 全局变量
const WORD_DIR = resolve(__dirname, '..')
const CONTEST_ALL_DIR = join(WORD_DIR, 'ContestAll')
const CONTEST_ID = process.argv[2]
const CONTEST_DIR = `contest_${CONTEST_ID}`
const CONTEST_DIR_PATH = join(CONTEST_ALL_DIR, CONTEST_DIR)
const CONTEST_INFO_PATH = join(CONTEST_DIR_PATH, 'config.yaml')


//=== step 1  找到匹配的比赛

//文件夹是否存在
let contest_dir_path_stat = statSync(CONTEST_DIR_PATH)
let contestConformed = contest_dir_path_stat.isDirectory()
if (!contestConformed) {
    console.log(`没有找到匹配的比赛`)
    console.log(contestConformed)
    process.exit()
}

// 输出比赛的相关信息
const CONTEST_INFO = load_yaml(CONTEST_INFO_PATH)
var USER_INFO_DIR = ''

if (isAbsolute(CONTEST_INFO.user_codes))
    USER_INFO_DIR = CONTEST_INFO.user_codes
else {
    USER_INFO_DIR = join(WORD_DIR, CONTEST_INFO.user_codes)
}

const USER_INFO_PATH = join(USER_INFO_DIR, 'config.yaml')
const USER_INFO = get_users_info(USER_INFO_PATH)
// console.log(USER_INFO)

console.log(`找到比赛 ： ${CONTEST_ID} \n\n`)
console.log('标题：', CONTEST_INFO.title || '空')
console.log('描述：', CONTEST_INFO.desc || '空')

// 进行评测
let results = []
//枚举users
for (let user of USER_INFO.users) {
    console.log('开始评测 >>> ', user.name || user.id, '\n')
    let user_cwd = join(USER_INFO_DIR, user.id)
    //枚举 题目
    for (let P of CONTEST_INFO.problems) {
        let code_name = join(P.create_dir, P.name + '.cpp')//TODO 可能有其它的后缀
        let user_code = join(user_cwd, code_name)
        if (!existsSync(user_code)) {
            console.log(code_name, '不存在，得分 0!')
            continue;
        }

        let problem_path = join(CONTEST_INFO.problems_dir, P.dir)
        let results = judge_one_problem(user_code, problem_path, '/tmp')
        console.log('评测结果', results.join(','))


    }
    console.log('结束评测 <<< ', user.name || user.id, '\n\n')
}