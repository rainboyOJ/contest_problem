### 【题目描述】

一般的老式手机的键盘是这样的：

```plaintext
|--------|-------|--------|
| 1      | 2 abc | 3 def  |
|--------|-------|--------|
| 4 ghi  | 5 jkl | 6 mno  |
|--------|-------|--------|
| 7 pqrs | 8 tuv | 9 wxyz |
|--------|-------|--------|
| *      | 0     | #      |
|--------|-------|--------|
```
要按出英文字母就必须要按数字键多下。例如要
按出 x 就得按 9 两下，第一下会出 w， 而第二下会把 w 
变成 x。0 键按一下会出一个空格。 你的任务是读取若
干句只包含英文小写字母和空格的句子，求出要在手机
上打出这个句 子至少需要按多少下键盘。

### 【输入格式】

包含一行，表示一个句子，句子中只包含英文小
写字母和空格，且不超过 200 个字符。

### 【输出格式】

包含一行一个整数，表示按键盘的总次数。。

### 【输入样例】

```plaintext
i have a dream 
```

### 【输出样例】 

```plaintext
23
```

### 【数据范围】

对于 100％的数据，不超过 200 个字符。
