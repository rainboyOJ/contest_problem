//AH-J00002
#include<bits/stdc++.h>
using namespace std;
int k;
int K[105];
int one=0;
int five=0;
int ten=0;
int main()
{
    cin>>k;
    for(int i=0;i<k;++i)
    {
        cin>>K[i];
        if(K[i]==1)
            one++;
        else if(K[i]==5)
            five++;
        else if(K[i]==10)
            ten++;
    }
    cout<<one<<endl;
    cout<<five<<endl;
    cout<<ten<<endl;
}
