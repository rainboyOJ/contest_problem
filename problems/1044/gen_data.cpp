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
//随机图
//随机序列


int main(int argc,char * argv[]){
    srand(std::random_device ()()); //加到main的第一句
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    int MIN = atoi(argv[3]);
    int MAX = atoi(argv[4]);
    printf("%d %d\n",n,m);
    while ( n-- ) {
        int t = rnd(MIN,MAX);
        printf("%d ",t);
    }
    printf("\n");
    return 0;
}
