/* author: Rainboy email: rainboylvx@qq.com  time: 2021年 08月 06日 星期五 13:18:33 CST */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5,maxe = 1e6+5; //点与边的数量

int n,m;

struct Random {
    random_device rd;
    mt19937 engine{rd()};
    uniform_int_distribution<long long> dis; // in [0,0x7fffffffffffffff]
    Random(){}
    Random(int l,int r){ dis = uniform_int_distribution<long long> (l,r); }

    int operator()(){ return dis(engine); }
    template<typename U> //产生一定范围内的随机数
    U operator()(U l,U r){ return dis(engine) % ( r-l+1 ) + l; }

    Random create(int l,int r){ return Random(l,r); } //工厂模式
} rnd;

int main(int argc,char *argv[]){
    int n = rnd(10,1000);
    printf("%d\n",n);
    for(int i=1;i<=n;++i){
        int m = rnd(10,1000);
        for(int j=1;j<=m;++j){
            printf("%c", rnd('a','z')    );
        }
        printf("\n");
    }
    return 0;
}
