### 【题目描述】

 Pero和他的运营商签订了一个非常nice的流量套餐。
运营商每个月给Pero XMB的上网流量，并且他当月没用
完的流量会累积到到下个月继续使用。当然，Pero只能
使用他实实在在拥有的流量。

 如果我们能够提前预知他前N个月的流量使用情况，
我们就可以知道在第N+1个月pero会有多少可支配的流
量。

 这听起来是不是有点意思，既然你这么感兴趣，那
么就亲自动手帮Pero算一下吧。

### 【输入格式】

- 第1行：包含一个整数X（1≤X≤100），表示他每个月可以支配的流量；
- 第2行: 包含一个整数N（1≤N≤100），表示前N个月；
- 第3至n+2行：每行包含一个整数pi（0≤pi≤10，000）， 表示前N个月每个月所用的流量

### 【输出格式】

包含一个整数，表示他第N+1月能支配的流量。

### 【输入样例】 
```plaintext
10
3
4
6
2
```

### 【输出样例】 
```plaintext
28
```
