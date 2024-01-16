### 【题目描述】

小z准备举办一个比赛。他需要提供一些甜点给参赛者来补充能量。每种甜品有一定的能量ti和大小ui，且每种甜点最多有vi个。
小z准备用箱子来包装甜点。箱子可以容纳一定体积的甜点且需要一定的费用。小z有一种魔法，可以将一个甜点分成多份装在箱子里，最后再合在一起（但合成之后必须是完整的一个）。
	小z想知道准备能量至少为P的甜点的最小大小和最少需要多少费用来购买箱子，如果最少费用超过小z所拥有的钱数k则输出FAIL。

### 【输入格式】

第一行为4个正整数n,m,p, k( 1 ≤ n ≤ 200,1 ≤ m ≤ 200,0 ≤ p ≤ 50000, k <= 50000)分别代表甜点种类，箱子种类和参赛者比赛所需要补充的能量和小z所拥有的钱数。

接下来的n行，每行包含3个整数ti, ui, vi ( 1 ≤ ti ≤ 100,1 ≤ ui ≤ 100,1 ≤ vi ≤ 100) , 代表第i类甜点可以提供ti的能量，它的大小为ui并且小明最多有vi个该种类的甜点。

接下来又有m行，每一行包含3个整数xi, yi, zi ( 1 ≤ xj ≤ 100,1 ≤ yj ≤ 100,1 ≤ zj ≤ 100), 代表第i类箱子可以容纳xi大小的甜点，该类箱子的单价yi,并且小z最多可以使用zi个该类的箱子。

### 【输出格式】

第一行请输出最小的甜点大小。

第二行请输出最小的箱子费用，并且费用不能超过k。否则，输出FAIL。

### 【输入样例】

```plaintext
5 3 34 34
1 4 1
9 4 2
5 3 3
1 3 3
5 3 2
3 4 5
6 7 5
5 3 8
```

### 【输出样例】 

```plaintext
19
12
```

### 【数据范围】

- 30%: n, m <= 15, p, k <= 1000
- 60%: n, m <= 50, p, k <= 5000
- 100%: n, m <= 200, p <= 50000, k <= 50000
