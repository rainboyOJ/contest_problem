### 描述

多米诺骨牌有上下2个方块组成，每个方块中有1~6个点。现有排成行的n个多米诺骨牌如图所示。 

```plaintext

+-----+  +-----+  +-----+  +-----+
| o o |  |     |  |     |  |     |
| o o |  |  o  |  |  o  |  |  o  |
| o o |  |     |  |     |  |     |
+-----+  +-----+  +-----+  +-----+
|     |  | o o |  |o    |  |  o  |
|  o  |  |  o  |  |  o  |  |     |
|     |  | o o |  |    o|  |  o  |
+-----+  +-----+  +-----+  +-----+

```
两个方块互换位置。 编程用最少的旋转次数使多米诺骨牌上下2行点数之差达到最小。 对于图中的例子，只要将最后一个多米诺骨牌旋转180°，可使上下2行点数之差为0。 

### 输入格式

输入文件的第一行是一个正整数n(1≤n≤1000)，表示多米诺骨牌数。 接下来的n行表示n个多米诺骨牌的点数。每行有两个用空格隔开的正整数，表示多米诺骨牌上下方块中的点数a和b，且1≤a，b≤6。

### 输出格式

输出文件仅一行，包含一个整数。表示求得的最小旋转次数。

### 输入样例

```plaintext
4
6 1
1 5
1 3
1 2
```       


### 输出样例

```plaintext
1
```


