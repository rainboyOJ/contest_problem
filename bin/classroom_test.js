//随堂测试,测试一个题目


const { join, resolve, dirname, basename, extname, isAbsolute, relative } = require("path")
const { statSync, readFileSync, readdirSync, existsSync, writeFileSync, appendFileSync } = require("fs")
const { execSync } = require("child_process")
const jsyaml = require("js-yaml")
const compare = require("./compare.js")
const asciiTable = require('ascii-table')
const judge_one_problem = require("./judge_one_problem.js")
const Glob = require("glob")

//参数
// -p,--problem /home/rainboy/mycode/RainboyOJ/problems/roj/1000/data 测试题目数据地址
// -c,--code ../../code 代码的路径
const yargs = require("yargs/yargs")(process.argv.slice(2))
.alias('p','problem')
.describe('p','set problem data path')
.alias('c','code')
.describe('c','set users\'s code path')
.alias('h','help')
.string(['p','c'])
.demandOption(['p','c'])
.help()
.parse() // 参数解析

if( !yargs.p || !yargs.c ){
    console.log('please input node classroom_test.js -h for help')
    process.exit(0)
}

// 全局变量
const WORD_DIR = resolve(__dirname, '..')
const CONTEST_ALL_DIR = join(WORD_DIR, 'ContestAll')
const CONTEST_ID = process.argv[2]
const CONTEST_DIR = `contest_${CONTEST_ID}`
const CONTEST_DIR_PATH = join(CONTEST_ALL_DIR, CONTEST_DIR)
const CONTEST_INFO_PATH = join(CONTEST_DIR_PATH, 'config.yaml')

// 得到题目 path

// 读取代码列表
const PROBLEMS = Glob.globSync("*.cpp",{
    cwd:yargs.c,
    maxDepth:1
})

var table = new asciiTable()

for( let p of PROBLEMS) {
    // console.log(p)
    let code_name = p;
    let user_code = join(yargs.c, code_name)
    if( !isAbsolute(user_code))
        user_code = resolve(user_code)
    let problems_dir = yargs.p
    let results = judge_one_problem(user_code, problems_dir, '/tmp')
    // console.log(results.join(','))

    let score = 100 *(  results.reduce( (acc,cur)=> acc+ (cur =='AC'),0)/ results.length)
    table.addRow(p, results.join(','),score)
}
console.log(table.toString())