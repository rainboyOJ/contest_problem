/* author: Rainboy email: rainboylvx@qq.com  time: 2021年 08月 05日 星期四 20:33:32 CST */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5,maxe = 1e6+5; //点与边的数量

int n,m;

int a[maxn];

void getAns(){
    for(int i=n;i>=1;--i){
        if( n-i+1 >= a[i]) {
            printf("%d",a[i]);
            return;
        }
    }
}

int main(){
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=1;i<=n;++i){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+1+n);
    //int cnt = 0;
    //for(int i=1;i<=n;++i){
        ////printf("%d ",a[i]);
        //if(a[i] == 100000)
            //cnt++;
    //} 
    //printf("%d",cnt);
    //printf("\n");
    int thePos = 0;
    if( m != 0){
        for(int j=n;j>=1 && m > 0;--j){
            if( n-j+1 < a[j]) continue;
            thePos = j;
            break;
        }
        for(int i=n;i>=1;--i){
            if( a[i] == a[thePos]){ // first a[i] == a[j]
                thePos = i;
                break;
            }
        }
        for(int i = thePos;i >=1 && m>0 ; i--,m--){
            a[i]++;
        }
    }
    getAns();
    return 0;
}
