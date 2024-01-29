#include<bits/stdc++.h>
using namespace std;
int L,M,head,tail,ans = 0;
int arr[10005]{ 0 };
int main()
{
    cin>>L>>M;
    for(int i=1;i<=M;i++)
    {
        cin>>head>>tail;
        for(int j=head;j<=tail;j++)
            if(!arr[j])
                arr[j]=1;
    }
    for(int i=0;i<=L;i++)
    {
        if(arr[i]==0)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
