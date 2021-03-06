## 【题目描述】

北京地图可以看作是 R*C 的网格，奥运会期间对有
的地方要进行交通管制，有的地方不允许进入，有的地方
对离开时的行驶方向有限制：有的只允许走到上下两个相
邻的格子，有的只允许走到左右两个相邻的格子，没有的
任何限制的地方上下左右四个方向都允许。
现在给你地图的描述，格子的描述如下：

- 1.“+”表示可以向任意方向（上、下、左、右）移动一格；
- 2.“-”表示只能向左右方向移动一格；
- 3.“|”表示只能向上下方向移动一格；
- 4.“*”表示该位置不能到达。

你的任务是计算出从左上角到右下角的最少需要经过的格

### 【输入格式】

包含t组测试数据：

- 第一行一个整数t(1<=t=10)，表示有t组测试数据。
- 每一个测试数据，第一行一个整数r，第二行一个整数 c，表示地图是 r 行 c 列；
- 接下来 r 行，每行 c 个字符，每个字符是{+,*,-,|}中的一种。
- 你可以假设左上角不会是“*”。

### 【输出格式】

输出有t行，每行一个整数表示对应测试数据所需的

### 【输入样例】

```plaintext
3
2
2
-|
*+
3
5
+||*+
+++|+
**--+
2
3
+*+
+*+
```

### 【输出样例】
```plaintext
3
7
-1
```
### 【数据范围】
- 对于50%的数据： 1<=r,c<=20
- 对于100%的数据： 1<=r,c<=1000
