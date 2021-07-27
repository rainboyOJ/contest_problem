#!/bin/env node
const compare = require("./compare")
const jsyaml = require("js-yaml")
const fs = require("fs")
const {join} = require("path")
const {execSync} = require("child_process")
const asciiTable = require('ascii-table')
const AsciiTable = require("ascii-table/ascii-table")
const {toASCII} = require("punycode")

if(!module.parent){
  console.log( 
`
singleJudge CID test_1
singleJudge 6 1
  - 编译 tmp/1.cpp -> tmp/1
  - 找到 contest_6 里的plist.yml 里对应的第一个题目的编号
  - compare tmp/1 problems/pid/data
`
  )
  
  if(process.argv.length != 4) {
    console.log( '参数数目不对，退出!' )
    process.exit()
  }
  let CID = process.argv[2]
  let CID_PID = process.argv[3]

  let {problems}= jsyaml.load( fs.readFileSync(join(__dirname,'../ContestAll/contest_'+CID,'plist.yml'),{encoding:'utf8'}) )
  let PID = problems[parseInt(CID_PID)-1]

  execSync(`g++ -o ${CID_PID} ${CID_PID}.cpp`,{cwd:join(__dirname,'../tmp')})
  console.log( `g++ -o ${CID_PID} ${CID_PID}.cpp` )

  doJudge(join(__dirname,'../tmp/'+CID_PID), CID_PID,PID)

}

function doJudge(exePath,CID_PID,PID){
  let table = new asciiTable(`JudgeResult ${CID_PID}`)
  table.setHeading('ID','RESULT')
  let rets = compare(exePath,join(__dirname,'../problems/',PID+'','data'))
  console.log( rets )
  cnt = 0
  rets.map( ret => table.addRow(++cnt,ret))

  table.setJustify()//(AsciiTable.CENTER,'',8)
  table.setAlign(0, AsciiTable.CENTER)
  table.setAlign(1, AsciiTable.CENTER)

  console.log( table.toString() )
  console.log( 'TOTAL SCORE: ', (100 / rets.length * rets.filter(name => name =='AC').length).toFixed(2) )
  console.log( '\n\n' )
}


//module.exports = 
