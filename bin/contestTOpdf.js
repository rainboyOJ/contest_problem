#!/bin/env node
// 把某个比赛下的多个题目加载起来
// 转成一个md里，然后转成一个pdf

const {readFileSync, writeFileSync, existsSync}  = require("fs")
const jsyaml = require("js-yaml")
const Path = require("path")

function load_yaml(path){
  return jsyaml.load(readFileSync(path,{encoding:'utf8'}))
}


const project_path = Path.join(__dirname,"..")
const plist = load_yaml("./config.yaml")
var problems_dir = Path.join( project_path,plist.problems_dir)
if( Path.isAbsolute(plist.problems_dir) ) problems_dir = plist.problems_dir

//const __dirname = Path.resolve(Path.dirname(decodeURI(new URL(import.meta.url).pathname)));

function load_problem(pid){
  let base_path = Path.join(problems_dir,pid.dir)
  let content = readFileSync(Path.join(base_path,'content.md'),{encoding:'utf8'})
  let refrence = JSON.parse(readFileSync(Path.join(base_path,'config.json'),{encoding:'utf8'}))
  return {
    content,
    refrence
  }
}

var problems = []
var table_info = [ 
  ['题目','时间限制ms','内存限制mb','代码名','输入','输出']
]
for( let pid of plist.problems){ 
  let info = load_problem(pid)
  info.refrence.title = pid.name
  problems.push(info) 
  table_info.push([
    pid.name || info.refrence.title,
    info.refrence.time,
    info.refrence.memory,
    pid.name || info.refrence.codename ||( info.refrence.input ?  info.refrence.input.split(".")[0] : false) || 'unkown', 
    pid.name + '.in' ||  info.refrence.input,
    pid.name + '.out' || info.refrence.output
  ])
}

//console.log(   markdownTable(table_info,{align:'c',padding:true}) )

//数据 写入

const newWrite = (data)=> writeFileSync('__contest.md',data,{encoding:'utf8'})
const Write = (data)=> writeFileSync('__contest.md',data,{encoding:'utf8',flag:'a+'})

//newWrite(`# ${plist.title} \n\n`)

//写入文件头
newWrite(`---
title: "${plist.title}"
author: [author:Rainboy]
date: "${new Date().getFullYear()}"
keywords: [contest]
listings-disable-line-numbers: true
listings-no-page-break: true
...

`)


function markdownTable(array2D){
  let ret = []
  array2D.splice(1,0,new Array(10).fill(':----:'))
  for(let row of array2D ) ret.push( '| ' +  row.join(' | ') + ' |' )
  return ret.join('\n')
}
Write(    markdownTable(table_info) )

if( existsSync('info.md') ){
  console.log( `存在 info.md,写入` )
  Write( readFileSync('info.md',{encoding:'utf8'}))
}



for( const [i, info] of problems.entries() ){
  Write('\n\n\n\n')
  Write(`## ${String.fromCharCode(65+i)} ${info.refrence.title} \n\n`)
  Write(info.content)
  Write('\n\n\n\n')
}
