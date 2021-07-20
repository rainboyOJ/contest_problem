// target : 收集学生比赛的代码 手动评测
// yarn && node uploadfile.js
// 学生上传打包成zip的代码文件
var formidable = require('formidable');
var http = require('http');
const fs = require("fs")
const mv = require('mv');

http.createServer(function (req, res) {
  if (req.url == '/fileupload') {
    var form = new formidable.IncomingForm();
    form.parse(req, function (err, fields, files) {
      var oldpath = files.filetoupload.path;
      var newpath = '/home/rainboy/contest_upload/' + files.filetoupload.name;
      mv(oldpath, newpath, function (err) {
        if (err) {
          console.log('> FileServer.jsx | route: "/files/upload" | err:', err);
          throw err;
        }

        res.write('File uploaded and moved!');
        res.end();

      });
 });
  } else {
    res.writeHead(200, {'Content-Type': 'text/html'});
    res.write('<form action="fileupload" method="post" enctype="multipart/form-data">');
    res.write('<input type="file" name="filetoupload"><br>');
    res.write('<input type="submit">');
    res.write('</form>');
    return res.end();
  }
}).listen(3000,function(){
  console.log(" server listen at port 3000")
});
