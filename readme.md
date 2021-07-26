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

 - nodejs >= 14
 - pandoc 用于生成pdf
 - latex 用于生成pdf
 - wqy-zenhui 字体

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

