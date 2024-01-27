/* author: Rainboy email: rainboylvx@qq.com  time: 2021年 08月 07日 星期六 22:33:14 CST */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5,maxe = 1e6+5; //点与边的数量

int n,m;
/* 定义全局变量 */

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
int main(){
    int T = rnd(2,30);
    cout << T << endl;
    for(int i=1;i<=T;++i){
        int n = rnd(50,50000);
        cout << n << endl;
        for(int i=1;i<=n;++i){
            cout << rnd(-600,1000) << " ";
        }
        cout << endl; 
    }
    return 0;
}
