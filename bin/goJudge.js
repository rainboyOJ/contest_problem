#!/bin/env node
console.log( 
`Usage: goJudge.js 比赛ID 评测.zip
    例子：goJudge.js 6 tmp/scy.zip
`)
if( process.argv.length != 4) process.exit()

const {join, dirname, basename, extname} = require("path")
const {readFileSync, readdirSync, existsSync, writeFileSync, appendFileSync} = require("fs")
const {execSync} = require("child_process")
const jsyaml = require("js-yaml")

const CID = process.argv[2]
const ZIP = process.argv[3]

//=== step 1  找到匹配的比赛

let contestConformed = readdirSync(join(__dirname,"../ContestAll")).filter(name => name.split('_')[1] == CID)
if( contestConformed.length != 1){
  console.log( `没有找到匹配的比赛，匹配的数量为 ${contestConformed.length}`)
  console.log( contestConformed )
  process.exit()
}

CONTEST = contestConformed[0]
console.log( `找到比赛 ： ${CONTEST} \n\n` )

//=== step 2  测评的文件zip是否存在
if( !existsSync(ZIP)){
  console.log( `${ZIP} 文件不存在！` )
  process.exit()
}
let ZIPCWD = join(process.cwd(),dirname(ZIP))
//remove all cpp file
readdirSync(ZIPCWD).filter(name => extname(name) == '.cpp' )
    .forEach( name => execSync(`/usr/bin/rm ${name}`,{cwd:ZIPCWD}) )
//unzip
execSync(`unzip -o ${basename(ZIP)}`,{cwd:ZIPCWD})
//compile
const EXE_FILE = new Array(100)


let {problems}= jsyaml.load(readFileSync(join(__dirname,'../ContestAll/contest_'+CID,'plist.yml'),{encoding:'utf8'}) )

const singleJudge = require("./singleJudge")

let SCORE =     []
let RESULT = []
let user_name = basename(ZIP,".zip")

for( let i =0;i<problems.length;i++){
  let {title}= jsyaml.load(readFileSync(join(__dirname,"../problems",problems[i]+'','reference.yml'),{encoding:"utf8"}))
  let {retString,retScore} = singleJudge( join(process.cwd(),'tmp',`${i+1}.cpp`),problems[i]+'',title)
  SCORE.push(retScore)
  RESULT.push(retString)
  console.log( retString )
}
writeFileSync(`${user_name}_result.txt`, RESULT.join('\n'),{encoding:'utf8'})
let sum = SCORE.map( d=>parseFloat(d) ).reduce( (total,num) => total + num )
appendFileSync(`contest_${CID}_result.txt`, `${user_name},${SCORE.join(',')},${sum}\n`)
