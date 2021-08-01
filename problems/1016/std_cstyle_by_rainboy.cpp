/* author: Rainboy email: rainboylvx@qq.com  time: 2021年 08月 01日 星期日 09:53:29 CST */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5,maxe = 1e6+5; //点与边的数量

int n,m;
/* 定义全局变量 */
char a[maxn];
int idx = 0;
char b[maxn];
int idx2 = 0;
char decode[10000];
int main(){
    //读第一行
    while ( 1 ) {
        ++idx;
        scanf("%c",&a[idx]);
        if(a[idx] == '\n' || a[idx] =='\r'){
            a[idx] = '\0';
            break;
        }
    }
    //printf("%s\n",&a[1]);
    while ( 1 ) {
        ++idx2;
        int ret = scanf("%c",&b[idx2]);
        if(ret == EOF || b[idx] == '\n' || b[idx] =='\r')
            break;
    }
    int len = strlen(a+1);
    for(int i=1;i<=len;++i){
        if( a[i] >='A' && a[i] <='Z')
            printf("%c",b[ a[i]-'A'+1 ]);
        else    
            printf("%c",a[i]);
    }

    return 0;
}
