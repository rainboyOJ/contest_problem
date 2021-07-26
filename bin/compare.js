/**
 * 手动比较 结果
 */

var fs = require('fs');
var path = require('path');//解析需要遍历的文件夹
const child_process = require("child_process")

var getDataList= require("./getDataList")

function Diff(file1,file2){
  //TODO check file1 2 exists?
  try {
    //console.log( `diff --strip-trailing-cr ${file1} ${file2}` )
    child_process.execSync(`diff --strip-trailing-cr ${file1} ${file2}`)
    return 1
  }
  catch(error){
    return 0;
  }
}

function run(time,exe,in_file,out){
  //TODO check file1 2 exists?
  try {
    child_process.execSync(`timeout ${time} ${exe} < ${in_file} > ${out}`)
    return 1
  }
  catch(error){
    return 0;
  }
}

/* 
 * 1. 执行文件
 * 2. 数据目录
 * */
function compare( exePath,dataDir ,time=1){
  var { in_list,out_list,both_list,count } = getDataList(dataDir)

  for(let i =0 ; i < count ;i++){
      let [in_file,out_file] = both_list[i]
      let __in = path.join(dataDir,in_file)
      let file1 = path.join(dataDir,out_file)
      let file2 = 'out'

      if( run(time,exePath, __in, file2) == 0){
          console.log( `${i}: timeout` )
          continue
      }

      if( Diff(file1,file2) == 0){
          console.log( `${i}: wrong answer` )
          continue
      }
      console.log( `${i}: right` )
  }
}

compare( ...process.argv.slice(2) )
