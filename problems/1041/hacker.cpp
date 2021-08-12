#include <bits/stdc++.h>
using namespace std;

typedef long long lt;

const int maxn = 100010;
int n;
lt ai[maxn], bi[maxn];

lt read () {
    lt f = 1,x = 0;
    char ss = getchar ();
    while (ss < '0' || ss > '9' ) {
		if (ss == '-') f = -1;
		ss = getchar ();
	}
    while (ss >= '0' && ss <= '9') {
		x = x * 10 + ss - '0';
		ss = getchar ();
	}
    return f * x;
}

lt mul (lt a, lt b, lt mod) {
    lt res = 0;
    while (b > 0) {
        if(b&1) res = (res + a) % mod;
        a = (a + a) % mod;
        b >>= 1;
    }
    return res;
}

lt exgcd (lt a, lt b, lt &x, lt &y) {
    if (b == 0) {
		x=1; y=0;
		return a;
	}
    lt gcd = exgcd (b, a % b, x, y);
    lt tp = x;
    x = y; y = tp - a / b * y;
    return gcd;
}

lt excrt () {
    lt x, y, k;
    lt M = bi[1],ans = ai[1];  //��һ�����̵Ľ�����
    for (int i = 2; i <= n; i ++) {
        lt a = M, b = bi[i], c = (ai[i] - ans % b + b) % b;  //ax��c(mod b)
        lt gcd = exgcd (a, b, x, y), bg = b / gcd;
        if (c % gcd != 0) return -1;  //�ж��Ƿ��޽⣬Ȼ��������ʵ����
        x = mul (x, c / gcd, bg);
        ans += x * M;  //����ǰk��������Ĵ�
        M *= bg; //MΪǰk��m��lcm
        ans = (ans % M + M) % M;
    }
    return (ans % M + M) % M;
}

int main() {
    n = read();
    for (int i = 1; i <= n; i ++) bi[i] = read(), ai[i] = read();
    printf ("%lld", excrt ());
    return 0;
}
