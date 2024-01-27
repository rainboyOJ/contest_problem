#include <bits/stdc++.h>
using namespace std;

int n, m, i, j, k;
int f[4040][2]={}, num[4040];

inline int rd () {  //¿ì¶Á 
    int x = 0;
    bool f = true;
    char c;
    c = getchar();
    while (c < '0' || c > '9') {
        if (c == '-') f = false;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = (x << 1) + (x << 3) + (c ^ 48);
        c = getchar();
    }
    return f ? x : -x;
} 

bool check (int x) {
    int a, b, c, d;
    for (a = x - f[x - 1][0]; a <= x - 3; a ++) {
    	for(b = a + 1; b <= x - 2; b ++) {
    		for (c = b + 1; c <= x - 1; c ++) {
				if (num[a] == num[b] && num[c] == num[x]) return true;
				if (num[a] == num[c] && num[b] == num[x]) return true;
				if (num[a] == num[x] && num[b] == num[c]) return true;
				if (num[a] == num[b] && num[b] == num[c] && num[c] == num[x]) return true;
			}
		}
	}
    return false;
}

int main() {
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
    n = rd();
    for (i = 1; i <= 3; i ++) {
        f[i][0] = i;
        f[i][1] = 0;
    }
    for (i = 1; i <= n; i ++) num[i] = rd();
    for (i = 4; i <= n; i ++) {
        if (f[i-1][0] >= 3 && check (i)) {
            f[i][1] = f[i - 1][1] + 1;
            f[i][0] = 0;
        } else {
            f[i][1] = f[i - 1][1];
            f[i][0] = f[i - 1][0] + 1;
        }
    }
    printf ("%d\n", f[n][1]);
    //fclose(stdin); fclose(stdout);
	return 0;
}
