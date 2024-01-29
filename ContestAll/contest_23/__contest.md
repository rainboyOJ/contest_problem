---
title: "第23次测试"
author: [author:Rainboy]
date: "2022"
keywords: [contest]
listings-disable-line-numbers: true
listings-no-page-break: true
...

| 题目 | 时间限制ms | 内存限制mb | 代码名 | 输入 | 输出 |
| :----: | :----: | :----: | :----: | :----: | :----: | :----: | :----: | :----: | :----: |
| 炒股软件 | 1000 | 128 | unkown | .in | .out |
| 符合条件的路径数量 | 1000 | 128 | unkown | .in | .out |
| 采集能量 | 1000 | 128 | unkown | .in | .out |
| 检阅士兵 | 1000 | 128 | unkown | .in | .out |



## 1 炒股软件 

### 【题目描述】
程序员小明制作了一个炒股软件，这个软件可以预测某一只股票接下来n天的股价 p1,p2,……,pn  ，其中 pi 表示这支股票第 i 天1股股票的价格。在每一天，小明可以决定是否购买或出售股票，他也可以先购买，然后在同一天出售股票。为了简化问题，假设小明在任何时候只能持有1股股票，在此情形下小明想知道他能获得的最大利润是多少。由于小明忙着改善软件，于是他将这个问题交给了你。

### 输入格式

第一行一个正整数 n 。
第二行n个正整数 p1,p2,……,pn ，其中 pi 表示这支股票第 i 天1股股票的价格。

### 输出格式

一个正整数，表示小明能获得的最大利润。

### 输入样例

```plaintext
6
7 1 5 3 6 4
```

### 输出样例

```plaintext
7
```

### 数据范围与提示

解释：

在第 2 天（股票价格 = 1）的时候买入，在第 3 天（股票价格 = 5）的时候卖出, 这笔交易所能获得利润 = 5 - 1 = 4 。

随后，在第 4 天（股票价格 = 3）的时候买入，在第 5 天（股票价格 = 6）的时候卖出, 这笔交易所能获得利润 = 6 - 3 = 3 。

总利润为 4 + 3 = 7 。
 
### 【数据规模】

对于100%的数据 ，`1<=n<=30000,  0<pi<=10000`








## 2 符合条件的路径数量 

### 题目描述

给你有n个结点的二叉树(结点编号为1~n)，根节点是1号结点 。现在给出 一个整数目标 Sum ，要求找出所有从根节点到叶子节点路径总和等于给定目标Sum 的路径数量。

叶子节点：是指没有子节点的节点。

### 输入格式

第一行二个以空格分隔的整数 n和Sum ，意义如题。

接下来n-1行，每行3个以空格分隔的整数 x，  y，  z 表示结点x与y之间有一条权值为z的边。

保证数据形成一棵树。

### 输出格式

一个整数，表示符合条件路径的数量。

### 输入样例
```plaintext
5 8
1 2 3
1 3 8
2 4 4
2 5 5
```

### 输出样例

```plaintext
2
```

### 数据范围与提示

对于50%的数据，`0<n<=10`;

对于100%的数据，`0<n<=5000, 1<=x,y<=n , 0<z<=1000, 0<=Sum<=10000`;








## 3 采集能量 

### 【题目描述】

小红和小明在玩游戏，游戏在一个N x N的网格中进行，左上角格子的位置是（1，1),右下角格子的位置是（N，N)。每个格子中可能是能量、荆棘 或者是空地中的某一种，由以下三种数字的一种来表示：


0 表示这个格子是空的，所以你可以穿过它。

1 表示这个格子里装着一个能量，你可以采集能量然后穿过它。

-1 表示这个格子里有荆棘，挡着你的路。


游戏的规则如下：

从位置 (1, 1) 出发，最后到达 (N, N) ，只能向下或向右走，并且只能穿越有效的格子（即只可以穿过值为0或者1的格子）；

当到达 (N, N) 后，你要继续走，直到返回到 (0, 0) ，只能向上或向左走，并且只能穿越有效的格子；

当你经过一个格子且这个格子包含一个能量时，你将采集到能量并且这个格子会变成空地（值变为0）；

如果在 (1, 1) 和 (N, N) 之间不存在一条可经过的路径，则没有任何一个能量能被采集到。


小红想要在符合游戏规则的情况下采集尽量多的能量，你能帮帮她吗？

### 输入格式

第一行一个正整数 N。

接下来N行，每行N个整数，保证每个数都是（1、0、-1）。

### 输出格式

一个整数，表示小红能收集的最多能量

### 输入样例

```plaintext
3
0 -1 1
1 0 1
1 1 0
```

### 输出样例
```plaintext
4
```
### 数据范围与提示

对于50%的数据，1<=N<10；

对于100%的数据，1<=N<=200。









## 4 检阅士兵 

### 题目描述

孙子曰:兵者,国之大事,死生之地,存亡之道,不可不察也。小明是Z国兵马大元帅，他统领Z国N名士兵，每一名士兵都有一个战斗力a1,a2,a3,……,an ，ai表示第i名士兵的战斗力（由于一些特殊原因某些士兵的战斗力可能是负数）。Z国国王对军队建设特别用心，他会经常检阅士兵。每次国王检阅士兵小明都会将N名士兵站成一列。国王检阅士兵的方式比较特别，他会给小明下达M条指令，指令可能是以下两种之一：

1、1 x y ，查询士兵编号在x至y之间（包含x和y）连续的若干名士兵的最大战斗力之和，即区间[x,y]之间的最大连续子段和。保证（x<=y)。

2、2 x y ，鼓励操作，鼓励x号士兵，使之战斗力变成 y。

对于每个查询指令，输出一个整数表示答案。

### 输入格式

第一行两个整数 N,M。

第二行 N个整数 ai。

接下来 M 行每行 3 个整数 k,x,y ，k=1 表示查询，k=2 表示鼓励。

### 输出格式

对于每个查询指令输出一个整数表示答案。

每个答案占一行。

### 输入样例
```plaintext
5 3
2 2 -3 4 5
1 1 5
2 2 -2
1 1 5
```

### 输出样例
```plaintext
10
9
```

### 数据范围与提示

对于100%的数据 `1≤N≤100000,  1≤M≤100000,   −1000≤ai≤1000 ,  1<=x<=N`;



