# 存比赛的仓库

## 目录

```plaintext
.
├── bin         脚本文件
├── ContestAll  所有比赛
├── problems    比赛的题目
└── template    生成pdf的模板
```

## 如何使用

### 需要软件

 - linux系统（老师的电脑，学生的电脑可以不需要）
 - nodejs >= 14
 - pandoc 用于生成pdf
 - latex 用于生成pdf
 - wqy-zenhui 字体(可选)

我在archlinux下如下安装

```sh
sudo pacman -Sy -y nodejs latex pandoc wqy-zenhei yarn
cd bin
yarn    #安装需要的npm包
```

其它linux系统请自行查找

### 生成题目的pdf

例如生成第5个比赛的pdf

```sh
cd ContestAll/contest_5

# 生成 __contest.md
node ../../bin/contestTOpdf.js

# 用 __contest.md 生成 生成 __contest.pdf
../../bin/pandoc.sh
```

### 学生如果打包代码上传代码给老师（linux 系统下

1. 学生打包自己的代码为zip

```
zip 名字缩写 {1...4}.zip
```
2.  老师电脑（linux)中在`contest_problem`目录中

```
node bin/uploadfile.js
```
会在老师的电脑中开启一个运行在3000端口的网站，接收学生上传的文件

3. 学生在浏览器中输入地址 `http://老师电脑ip:3000`

 - 打开一个网页
 - 点击上传
 - 选中上面创建的zip压缩包

4. zip文件会上传到`contest_problem/tmp`目录下

具体如何评测，看下面

### 手动评测

1. 需要`nodejs >= 14.0` ,`yarn or npm`,`git`


2. 下载 或 更新 本仓库
 - 下载`git clone https://gitee.com/Moon-Online-Judge/contest_problem`
 - 更新:
    - `cd contest_problem` 进入下载的目录
    - `git pull` 从gitee拉取更新

3. 在目录`contest_problem` 中

4. 安装fcmp2 ，用来比较两个文本文件是否相同

安装 https://github.com/rainboyOJ/testlib 下的 fcmp2

```
git clone https://github.com/rainboyOJ/testlib
cd testlib
mkdir build && cd build
cmake ..
make
cd ../output
sudo install fcmp2 /usr/bin
```

5. 评测

 - 评测整个比赛 `./bin/goJudge.js 8 tmp/foo.zip` 评测第8个比赛，学生上传文件为foo.zip里的代码，代码要求命名为`1.cpp 2.cpp 3.cpp 4.cpp`(假如这个比赛有4个题目)
 - 评测比赛中的一个题目 `./bin/goJudgeSingle.js 8 1` ,评测第8个比赛的第一个题目，必须有`tmp/1.cpp`这个文件
  ```
  goJudgeSingle CID test_1
  goJudgeSingle 6 1
    - 编译 tmp/1.cpp -> tmp/1
    - 找到 contest_6 里的plist.yml 里对应的第一个题目的编号
    - compare tmp/1 problems/pid/data
  ```
 - 按题目编号来评测 `./bin/singleJudge.js 1000 tmp/1.cpp`,用`tmp/1.cpp` 来评测 `problems/1000` 这个题目
