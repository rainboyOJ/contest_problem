#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,p;
    char s;
    cin>>m>>n>>s>>p;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m;j++){
            if(p==1||i==1||i==m||j==1||j==n){
                cout<<s;
            }else cout << " ";
        }
        cout << endl;
    }
return 0;
}