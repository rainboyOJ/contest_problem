### 【题目描述】

有2*n个外星人现在准备离开地球，现在一共有$n+1$个飞碟可供他们使用，每个飞碟最多从两个人。也就是说一定有两个外星人单独坐一个飞碟，有n-1个飞碟上有两个人。

如果有两个人在一个飞碟上，这两个外星人就会生气，影响飞碟的稳定性。这个值为两个外星人的怒气值x的差的绝对值。整个队伍的不稳定性由所有双人飞碟的值的和。现在你可以安排外星人如何乘坐飞碟，进而求出队伍的最小不稳定性。

### 【输入格式】

- 第一行，一个整数n
- 第二行，2*n个值，表示每个外星人的怒气值xi

### 【输出格式】

一个整数，队伍的最小不稳定性。

### 【输入样例】

```plaintext
3
1 2 3 4 500 1000
```

### 【输出样例】 

```plaintext
2
```

### 【数据范围】

- $2 \leqslant n \leqslant 50, 1 \leqslant x_i \leqslant 1000$

