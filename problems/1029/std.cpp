/* author: Rainboy email: rainboylvx@qq.com  time: 2021年 08月 09日 星期一 13:50:23 CST */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5,maxe = 1e6+5; //点与边的数量

/* 定义全局变量 */

int T,a[3];
int f[2][maxn]; 
// f[0][j] 容量为j的情况,不吃药片能否达到j
// f[1][j] 容量为j的情况,吃药片能否达到j
// f[0][j] = f[0][j] || f[0][j-w[i]]
// f[1][j] = f[1][j] || f[1][j-w[i]] || f[0][2*j]
//
int main(){
    scanf("%d%d%d",&T,&a[1],&a[2]);
    f[0][0] = 1;
    f[1][0] = 1;
    int ans = -1;
    for(int k = 1;k<=2;k++){
        for(int i = a[k] ;i<=T ;i++) {
            if( f[0][i] == 0 && f[0][i-a[k]] == 1){
                f[0][i] = 1;
                f[1][i>>1] = 1;
                ans = max(ans,i);
            }
            //printf("f[0][%d]= %d \n",i,f[0][i]);
        }
        //printf("================\n");
    }
        //printf("================\n");
        //printf("================\n");
    for(int k = 1;k<=2;k++){
        for(int i = a[k] ;i<=T ;i++) {
            if( f[1][i-a[k]] == 1){
                f[1][i] = 1;
                ans = max(ans,i);
            }
            //printf("f[1][%d]= %d \n",i,f[1][i]);
        }
    }
    printf("%d",ans);
    return 0;
}
