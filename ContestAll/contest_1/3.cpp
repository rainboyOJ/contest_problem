//暴力
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5,maxe = 1e6+5; //点与边的数量

int n,m;
/* 定义全局变量 */

vector<int> v;

int a[100];
vector<int> seq;
void dfs(int d,int pre){
    if( d == 3){
        for(int i=1;i<=2;++i){
            printf("%d ",a[i]);
        }
        printf("\n");
        return;
    }
    for(int i=pre+1;i<=seq.size()-1;++i){
        a[d] = seq[i];
        dfs(d+1,i);
    }
}

void dfs2(int d){
    if( d == n ){
        return;
    }
}

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;++i) {
        int t;
        scanf("%d",&t);
        v.push_back(t);
    }
    seq = v;
    dfs(1,-1);

    return 0;
}
