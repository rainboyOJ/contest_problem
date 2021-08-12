#include <bits/stdc++.h>
using namespace std;

int w[1005], val[1005];
int dp[1005][1005];

int main () {
	//freopen ("girl.in", "r", stdin);
	///freopen ("girl.out", "w", stdout); 
    int t, m;
    scanf ("%d%d", &t, &m);
    for (int i = 1; i <= m; i ++) {
        scanf ("%d%d", &w[i], &val[i]);
    }
    for (int i = 1; i <= m; i ++) {
    	for (int j = t; j >= 0; j --) {
            if(j >= w[i]) {
                dp[i][j] = max(dp[i - 1][j - w[i]] + val[i], dp[i - 1][j]);
            }
            else {
                dp[i][j] = dp[i - 1][j];
            }              
        }
	}
    printf ("%d", dp[m][t]);
	//fclose (stdin); fclose (stdout); 
	return 0;
}
