### 【题目描述】

小明在夺得NOI金牌之后，顺利保送Tsinghua University。这一天，小明问长者：“我虽然已经保送了，但我的志向是为国家健康工作五十年。请问我应该怎样变得更有力气？”

长者回答：“你啊，Too Young Too Simple, Sometimes Naive!如果你想要我教 你，你要先进行艰苦的修行。”


长者的住宅中有一堵长度为 n 的墙。每天小明起床修行，会选择一段长度为 x 的区间染成白色。长者的住宅附近有一群香港记者，为了借助小明拜访长者， 第i天香港记者会将区间[li, ri]染成白色来讨好抖儿（也就是说，每天墙会被小明和香港记者各染一次）。现在小明已经预先知道了香港记者的动向，他想知道他最少几天就能把墙全部染白，完成修行。 


### 【输入格式】

第一行三个整数n, m, x，分别表示墙的长度，天数和区间的长度。 接下来 m 行，每行两个整数 li、ri，表示香港记者在第 i 天会将区间[li, ri]染成白色。

输出仅一行为一个整数，表示小明最少几天能把墙全部染白。如果 m 天之后依然无法染白，则输出“Poor Douer!”

### 【输出格式】

输出共一行，表示比例总数。

### 【输入样例】


```plaintext
10 3 3
2 5
4 8
9 10
```

### 【输出样例】 

```plaintext
2
```

### 【说明】

第一天小明刷墙的区间为[1,3] ；第二天抖儿刷墙的区间为[8,10]。

### 【数据范围】

| 测试点编号 | n        | m       | x      |
|------------|----------|---------|--------|
| 1          | n≤10     | m≤1     | 0<x<=n |
| 2          | n≤10     | m≤10    | 0<x<=n |
| 3          | n≤100    | m≤100   | 0<x<=n |
| 4          | n≤1000   | m≤1000  | 0<x<=n |
| 5          | n≤10000  | m≤10000 | 0<x<=n |
| 6          | n≤100000 | m≤10^5  | x=0    |
| 7          | n≤10^18  | m≤10^5  | x=0    |
| 8          | n≤10^18  | m≤10^5  | 0<x<=n |
| 9          | n≤10^18  | m≤10^5  | 0<x<=n |
| 10         | n≤10^18  | m≤10^5  | 0<x<=n |
