#include<iostream>
using namespace std;
int main()
{
    int n,a,j=0;
    cin>>n;
    for(int i=n;i>0;++j)
    {
        if(n%2==1)
            a=n%2;
        else
            a=(n-1)%2;
        n=n-a;
    }
    cout<<j;
    return 0;
}
