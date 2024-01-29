#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    int m,m1,m2,mf[105*105];
    cin>>l>>m;
    for(int i=0;i<m;++i)
    {
        cin>>m1;
        cin>>m2;
        mf[i]=m2-m1+1;
    }
    return 0;
}
