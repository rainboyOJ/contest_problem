## 【题目描述】


在机房的生活是如此的寂寞，以至于以 will 为首
的同志们只能够天天上农场种菜来打发时间。
msh 日复一日地种着她的玫瑰，will 则毫不疲倦地
偷着他的花……尽管天天花被偷掉一半，msh 始终没有
动摇她种花的决心。原来，一个宏伟计划的蓝图早已埋
藏在她的心中。

众所周知，农场的花一共有 4 种颜色，msh 
不喜欢老旧的东西，所以，她希望每天种花的方案都不
一样。特别地，她会觉得两种一样颜色的花种在相邻的
位置会很无聊。现在，她想知道，一共有多少种花的方
案。

这里要注意的是，农场的种花的位置是不规则的。
因此我们给出一对一对的相邻的位置的关系。

### 【输入格式】 

- 第一行两个数 N 和 M，表示种花的位置的个数和相邻的位置的对数
- 接下来 M 行，每行一组数 A，B 表示 A，B 相邻 

### 【输出格式】

包含一个数，表示种花的方案数。

### 【输入样例】 

```plaintext
5 4
1 2
1 3
1 4
1 5
```

```plaintext
                +----+
                |    |
                | 2  |
          +-----+----+----+
          |  3  | 1  | 5  |
          |     |    |    |
          +-----+----+----+
                | 4  |
                |    |
                +----+
```

### 【输出样例】

```plaintext
324
```

### 【数据范围】

- 40%的数据 N<=5
- 100%的数据 N<=10,M<=50