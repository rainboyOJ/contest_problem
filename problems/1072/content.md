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