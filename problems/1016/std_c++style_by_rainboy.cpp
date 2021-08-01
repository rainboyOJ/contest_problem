/* author: Rainboy email: rainboylvx@qq.com  time: 2021年 08月 01日 星期日 10:07:48 CST */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5,maxe = 1e6+5; //点与边的数量

int n,m;
/* 定义全局变量 */
string a,b;
int main(){
    getline(cin, a);
    getline(cin, b);
    for(int i=0;i<a.length();++i){
        if( a[i] >= 'A' && a[i]<='Z')
            cout << b[a[i]-'A'];
        else
            cout << a[i];
    }
    return 0;
}
