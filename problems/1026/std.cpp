/* author: Rainboy email: rainboylvx@qq.com  time: 2021年 08月 06日 星期五 13:22:48 CST */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5,maxe = 1e6+5; //点与边的数量

int n,m;
/* 定义全局变量 */

vector<string> v;
int main(){
    cin >> n;
    for(int i=1;i<=n;++i){
        string t;
        cin >> t;
        v.push_back( std::move(t) );
    }
    sort(v.begin(),v.end());
    for (const auto& e : v) {
        cout << e << endl;
    }
    return 0;
}
