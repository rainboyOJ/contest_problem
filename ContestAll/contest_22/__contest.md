---
title: "第22次测试"
author: [author:Rainboy]
date: "2022"
keywords: [contest]
listings-disable-line-numbers: true
listings-no-page-break: true
...

| 题目 | 时间限制ms | 内存限制mb | 代码名 | 输入 | 输出 |
| :----: | :----: | :----: | :----: | :----: | :----: | :----: | :----: | :----: | :----: |
| 二进制求和 | 1000 | 128 | gwdml | gwdml.in |  |
| 盛最多水的容器 | 1000 | 128 | gwdml | gwdml.in |  |
| 摆动序列 | 1000 | 128 | gwdml | gwdml.in |  |
| 课程学习 | 1000 | 128 | gwdml | gwdml.in |  |



## 1 二进制求和 

# 二进制求和

## 题目描述

给你两个二进制字符串，返回它们的和（用二进制表示）。
输入为 非空 字符串且只包含数字 1 和 0。

## 输入格式

第一行输入一个由'0' 或 '1' 组成的字符串a。
第二行输入一个由'0' 或 '1' 组成的字符串b。
输出格式
一行一个字符串表示和。

## 输入样例

```plaintext
1010
1011
```

## 输出样例

```plaintext
10101
```

## 数据范围与提示

- 每个字符串仅由字符 '0' 或 '1' 组成。
- 1 <= a.length, b.length <= 104
- 字符串如果不是 "0" ，就都不含前导零。
- 每个字符串仅由字符 '0' 或 '1' 组成。
- 1 <= a.length, b.length <= 10^4
- 字符串如果不是 "0" ，就都不含前导零。








## 2 盛最多水的容器 

# 盛最多水的容器

## 题目描述

给定一个长度为 n 的整数数组 height 。有 n 条垂线，第 i 条线的两个端点是 (i, 0) 和 (i, height[i]) 。

找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。
返回容器可以储存的最大水量。

说明：你不能倾斜容器。

## 输入格式

第一行一个正整数n,表示有n条线段。

第二行n个正整数height[1],height[2],……，height[2]，意义如题。

## 输出格式

输出一个正整数，表示容器可以储存的最大水量

## 输入样例

```plaintext
9
1 8 6 2 5 4 8 3 7
```

## 输出样例

```plaintext
49
```
## 数据范围与提示

- 对于50%的数据， 2<=n<=1000
- 对于100%的数据，2<=n<=105 , 0<=height[i]<=10^4








## 3 摆动序列 

# 摆动序列


## 题目描述

如果连续数字之间的差严格地在正数和负数之间交替，则数字序列称为 摆动序列 。第一个差（如果存在的话）可能是正数或负数。仅有一个元素或者含两个不等元素的序列也视作摆动序列。

例如， [1, 7, 4, 9, 2, 5] 是一个 摆动序列 ，因为差值 (6, -3, 5, -7, 3) 是正负交替出现的。

相反，[1, 4, 7, 2, 5] 和 [1, 7, 4, 5, 5] 不是摆动序列，第一个序列是因为它的前两个差值都是正数，第二个序列是因为它的最后一个差值为零。
子序列 可以通过从原始序列中删除一些（也可以不删除）元素来获得，剩下的元素保持其原始顺序。

给你n个整数a1,a2,……,an ，求这n个数中作为摆动序列的最长子序列的长度 。

## 输入格式

第一行一个正整数n，表示有n个数。

第二行n个整数，a1,a2,……,an 。

## 输出格式

一个整数表示这n个数中作为摆动序列的最长子序列的长度。

## 输入样例

```plaintext
10
1 17 5 10 13 15 10 5 16 8
```

## 输出样例

```plaintext
7
```

## 数据范围与提示

解释：这个序列包含几个长度为 7 摆动序列。

其中一个是 [1, 17, 10, 13, 10, 16, 8] ，各元素之间的差值为 (16, -7, 3, -3, 6, -8) 。


## 【数据规模】

对于100%的数据 `1=<n<=1000 ,  0<ai<=1000`.








## 4 课程学习 

# 课程学习


## 题目描述

小明需要学习 n 门课程，课程编号从 1 到 n 。这n门课程之间有m个关系，每一个关系由两个整数 x,y 构成，表示  x 是 y 的先修课程。同时给你n个整数t1,t2,t3,……，tn ，其中 ti 表示完成第 i 门课程需要花费的月份数。

请你根据以下规则算出完成所有课程所需要的最少月份数：

1、若要学习某门课，必须要学习完它的所有先修课，如果一门课的所有先修课都已经完成，你可以在任意时间开始这门课程。

2、你可以同时上任意门课程 。
请你返回完成所有课程所需要的最少月份数。

注意：测试数据保证一定可以完成所有课程（也就是先修课的关系构成一个有向无环图）。

## 输入格式

第一行2个整数n，m表示n门课程和m个关系。

第二行你个整数t1,t2,t3,……，tn，ti表示第i门课所需要花费的月份数。

接下来m行，每行两个整数x，y表示x是y的先修课程。

## 输出格式

一行，一个整数表示完成所有课所需要的月份数。

## 输入样例

```plaintext
3 2
3 2 5
1 3
2 3
```

## 输出样例

```plaintext
8
```

## 数据范围与提示

解释：上图展示了输入数据所表示的先修关系图，以及完成每门课程需要花费的时间。


```
+-------+         +-------+
|       |         |       |
|   1   |         |   2   |
|       |         |       |
+----+--+         +----+--+
     |                 |
     |                 |
     |                 |
     |   +-------+     |
     +-->|       |<----+
         |   3   |
         |       |
         +-------+
```

你可以在时间 0 同时开始课程 1 和 2 。

课程 1 花费 3 个月，课程 2 花费 2 个月。
所以，最早开始课程 3 的时间是月份 3 ，完成所有课程所需时间为 3 + 5 = 8 个月。


## 【数据规模】

对于100%的数据 ，`1 <= n <= 5000 ，n<m<=10000 ， 1 <= x, y <= n  ，0<ti<1000`

输入中没有重复的关系






