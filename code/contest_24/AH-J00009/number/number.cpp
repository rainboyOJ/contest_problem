#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int i;
    int a;
    int b=0,c=0,d=0;
    for(i=1;i<=k;i++){
        cin>>a;
        if(a==1)
        b++;
        if(a==5)
        c++;
        if(a==10)
        d++;
    }
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}