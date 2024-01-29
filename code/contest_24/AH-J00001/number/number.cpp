#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    int f = 0;
    int s = 0;
    int t = 0;
    int n[k];    
    int i;
    for(i = 1;i<=k;i++){ 
        cin>>n[i];
        if(n[i] == 1)
            f ++;
        if(n[i] == 5)
            s ++;
        if(n[i] == 10)
            t ++;
    }
    cout<<f<<endl;
    cout<<s<<endl;
    cout<<t;
    return 0;
}