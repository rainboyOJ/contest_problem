#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char c;
    int d;
    cin>>a>>b>>c>>d;
    int i,n;
    for(i=1;i<=a;i++){
        cout<<c;
    }
    cout<<endl;
    for(i=1;i<=b-2;i++){
        cout<<c;
        for(n=1;n<=b-2;n++){
            if(d==0){
                cout<<" ";
            }
            else
            cout<<c;
        }
        cout<<c<<endl;
    }
    for(i=1;i<=a;i++){
        cout<<c;
    }
    return 0;
}