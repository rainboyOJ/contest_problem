#!/bin/env node
const fs = require("fs")
const {join} = require("path")
const jsyaml = require("js-yaml")


let list = fs.readdirSync(join(__dirname,"../problems")).filter( name => /\d{4}/.test(name))
//console.log( list )
for( let pid of list){
  let {title} = jsyaml.load(fs.readFileSync(join(__dirname,"../problems",pid,"reference.yml"),{encoding:"utf8"}))
  console.log( pid,title )
}
