// 把某个比赛下的多个题目加载起来
// 转成一个md里，然后转成一个pdf

import {readFileSync, writeFileSync}  from "fs"
//const jsyaml = require("js-yaml")
import * as jsyaml from 'js-yaml'
//const Path = require("path")
import * as Path from "path"
//const {markdownTable} = require('markdown-table')
import {markdownTable} from 'markdown-table'

function load_yaml(path){
  return jsyaml.load(readFileSync(path,{encoding:'utf8'}))
}


let plist = load_yaml("./plist.yml")

const __dirname = Path.resolve(Path.dirname(decodeURI(new URL(import.meta.url).pathname)));

function load_problem(pid){
  let base_path = Path.join(__dirname,"../problems")
  let content = readFileSync(Path.join(base_path,pid+'','content.md'),{encoding:'utf8'})
  let refrence = load_yaml(Path.join(base_path,pid+'','reference.yml'))
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
  problems.push(info) 
  table_info.push([
    info.refrence.title,
    info.refrence.time,
    info.refrence.memory,
    info.refrence.codename || info.refrence.input.split(".")[0],
    info.refrence.input,
    info.refrence.output
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
Write(    markdownTable(table_info,{align:'c',padding:true}) )
for( const [i, info] of problems.entries() ){
  Write('\n\n\n\n')
  Write(`## ${i+1} ${info.refrence.title} \n\n`)
  Write(info.content)
  Write('\n\n\n\n')
}
