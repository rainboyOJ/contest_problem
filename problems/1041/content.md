### 【题目描述】
总所皆知，zklcdc 也就是我们 「稳健 Online Judge」的站长大大，是一位精通各
种 Hacker 技术的大佬，可他曾经创下壮举却鲜有人知，红客联盟乃是世界第 4，中国
第 1 的黑客联盟，在经历各种黑客大战后于 2004 年解散，几位核心人物人间蒸发，直
至 2008 年重组，而当年的核心人物 zklcdc 却不再出山。 
如今中美摩擦再起，zklcdc 决定再次出马，黑进五角大楼盗取资料，他已经攻破
了 99%的防御系统，为（nu）国（li）奉（zhuang）献（bi）之余，他将最后的难题交给了你（主要因为太简单，不屑一做）； 

给定 n 组非负整数 ai，bi，求解关于 x 的方程组 

$$
\left\{\begin{matrix}
x &\equiv b_1(\mod a_1) \\ 
x &\equiv b_2(\mod a_2) \\ 
& \cdots \\ 
x &\equiv b_n(\mod a_n) \\ 
\end{matrix}\right.
$$

求的最小非负整数解。 
 
### 【输入格式】

第一行包括一个正整数 n 
接下来 n 行，每行两个正整数 ai，bi 
 

### 【输出格式】
 
输出一行，为满足条件的最小非负整数 x。 
### 【输入样例】1

```plaintext
3 
11 6 
25 9 
33 17 
```

### 【输出样例】1

```plaintext
809
```

### 【输入样例】2

```plaintext
4 
18373 16147 
8614 14948 
8440 17480 
22751 21618 
```

### 【输出样例】2

```plaintext
13052907343337200 
```

### 【数据范围】

- 对于 1 – 6 测试点，$n \leqslant 200,0 \leqslant b_i < a_i \leqslant 100$
- 对于 7 – 10 测试点，$n \leqslant 10,0 \leqslant bi < ai \leqslant 1012$
- 对于 11、12 测试点，$n \leqslant 10 5,0 \leqslant bi < ai \leqslant 100$
- 对于 13 – 15 测试点，$n \leqslant 10 5,0 \leqslant bi < ai \leqslant 10 12$

保证答案不超过$10^18$
 
### 【提示】 

如果 m 整除 a -b，我们就说 a 与 b 模 m 同余并记为 $a \equiv b (\mod m)$

简单来说，就是它们模 m 后的余数相同就可以记成这样 
 
### 【后记】 

zklcdc 在盗取美国重要数据后，被 FBI 全球通缉，最终只能于某中学伪装为一名高二学
