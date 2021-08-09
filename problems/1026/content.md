### 【题目描述】

有一组字符串，现在想要按字典序排序。

字典序的描述如下: 依次比赛字符的大小，按第一个不相等的字符来决定大小，如果都相等，按长度比较。

例如
```plaintext
abc < ad
ab < abc
```

### 【输入格式】

 - 第一行，一个数字n($\leqslant 1000$)，表示接下来有n行字符串
 - 接下来n行字符串，每个字符串的长度$\leqslant 1000$


### 【输出格式】

排序后的字符串，每行一个

### 【输入样例】

```plaintext
9
as
aster
at
astrolabe
ataman
baa
attack
astronomy
astrophysics
```

### 【输出样例】 

```plaintext
as
aster
astrolabe
astronomy
astrophysics
at
ataman
attack
baa
```


