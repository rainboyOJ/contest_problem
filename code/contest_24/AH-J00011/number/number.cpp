#include<bits/stdc++.h>
using namespace std;
int k,t,a,b,c;
int main(){
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>t;
        if(t==1){
        a++;
    }
        if(t==5){
        b++;
    }
        if(t==10){
        c++;
    }
    }
    cout<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}