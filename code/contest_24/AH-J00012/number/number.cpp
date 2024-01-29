#include<bits/stdc++.h>
using namespace std;
int k,n,a,b,c;
int main(){
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>n;
        if(n==1)
        a++;
        if(n==5)
        b++;
        if(n==10)
        c++;
    }
cout<<a<<endl<<b<<endl<<c; 
return 0;
}