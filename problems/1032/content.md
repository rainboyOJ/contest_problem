### 【题目描述】

有一组整数${a_1,a_2,a_3, \cdots ,a_n}$，想求出两组连续区间的和A,B的最大A+B，其中A和B不能相交

公式描述如下

$$
max\{\sum_{i=s_1}^{t_1}+\sum_{i=s_2}^{t_2}\} 1 \leqslant s_1  \leqslant  t_1 \leqslant t_2 \leqslant  n
$$

### 【输入格式】
info

有多组数据 ，第一行一个数字T（<=30），表示接下来有T组数据 

每给数据两行，第一行n( 2<=n<=50000)，第二行n个整数,每个数字的绝对值不超过10000

### 【输出格式】

每组数据输出一行，最大值 

### 【输入样例】

```plaintext
1
10
1 -1 2 2 3 -3 4 -4 5 -5
```

### 【输出样例】 

```plaintext
13
```

### 【HINT】

选择{2,2,3,-3,4} 和 {5} 得到最大值 
