#include <bits/stdc++.h>
using namespace std ;
int l,m;
int a[10005] = {0};
int main(){
    cin >> m >> l;
    int i,j;
    for (i=1;i<=m;i++){
        int s,t;
        cin >> s >> t;
        for (j=s;j<=t;j++){
            a[j] = 1;
        }
    }
    int cnt = 0;
    for (i=0;i<=l;i++){
        if(!a[i]) cnt++;
    }
    printf("%d\n",cnt);
    return 0 ;
}