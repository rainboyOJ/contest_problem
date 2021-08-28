/* author: Rainboy email: rainboylvx@qq.com  time: 2021年 08月 14日 星期六 14:57:34 CST */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5,maxe = 1e6+5; //点与边的数量

int n,m;
/* 定义全局变量 */

// 生成[l,r]内的整数随机数
inline int rnd(int l,int r){ return rand() %(r-l+1) +l; }
// 生成随机大小写字母
inline char rnd_char(bool lower=1){ return rnd('a','z') + (lower ? 0 : 'A'-'a');}

//不重复的l,r的序列
std::vector<int> rnd_norep_squence(int l,int r){
    std::vector<int> v{};
    for(int i=l;i<=r;++i) v.push_back(i);
    std::random_shuffle(v.begin(), v.end());
    return v;
}

//TODO
//随机树
struct rnd_tree {
    struct edge {int u,v,w;};
    std::vector<edge> e;
    vector<int> node{};
    bool output_weight = 1; //是否输出边权
    rnd_tree(size_t n,int Min_ew=1,int Max_ew=100000){
        for(int i=1;i<=n;++i) node.push_back(i);
        for(int i=2;i<=n;++i){
            int u      = rnd(1,i-1);
            int weight = rnd(Min_ew,Max_ew);
            e.push_back({u,i,weight});
        }
        std::random_shuffle(node.begin(), node.end());
        //cout << "=";
    }
    friend std::ostream& operator<<(std::ostream & os,const rnd_tree & rt) {
        for (const auto& e : rt.e) {
            os << rt.node[e.u-1] << " " << rt.node[e.v-1];
            if( rt.output_weight )    os << " " << e.w;
            os<< std::endl;
        }
        return os;
    }
};

//随机图
//随机序列


int main(int argc,char * argv[]){
    srand(std::random_device ()()); //加到main的第一句
    int T = atoi(argv[1]);
    while ( T-- ) {
        int x = rnd(0,1);
        if( x == 0)
            printf("%d",rnd(1234,56789123));
        else{
            deque<int> q;
            int t = rnd(2,3);
            for(int i=1;i<=t;++i){
                int x =rnd(1,9) ;
                q.push_back(x);
                q.push_front(x);
            }
            t = rnd(1,9-t*2);
            for(int i=1;i<=t;++i){
                q.push_back(0);
            }
            for(int i=0;i<=q.size()-1;++i){
                printf("%d",q[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
