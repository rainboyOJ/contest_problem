### 【题目描述】

给定 n 个长为 20 的数列，对这些数列从小到大进行排序。 
 
定义数列大小比较方式为：先比较首项，首项小的数列小；首项一样则比较第二项，以此类推

### 【输入格式】

输入文件共有 n+1 行，第一行一个整数 n。 
接下来 n 行，每行 20 个用空格隔开的 0~9 的正整数，一个数列。 
 

### 【输出格式】

输出文件共有 n 行，每一行是 20 个用空格隔开的 0~9 的正整数，表示一个数列。 

### 【输入样例】

```plaintext
5 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 5 1 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 8 2 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 5 4 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 2 5 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 9 8 
```


### 【输出样例】 

```plaintext
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 2 5 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 5 1 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 5 4 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 8 2 
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 9 8 
```

### 【数据范围】

对于 100%的数据，$n \leqslant 10^5$
 