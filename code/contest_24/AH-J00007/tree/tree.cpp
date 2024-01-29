#include <bits/stdc++.h>
using namespace std;
int L;
int rd[10005];
int M;
int bg[105];
int ed[105];
int cnt;
int main(){
    cin >> L >> M;
    for (int i = 0; i <= L; i ++){
        rd[i]=i;

    }
    for (int i = 0; i < M; i++){
        cin >> bg[i] >> ed[i];

    }
    for (int i = 0; i < M; i ++){
        for (int j = bg [i]; j <= ed[i]; j ++){
            rd[j] = -1;
        }
    }
    for (int i = 0; i <= L; i ++){
        if (rd[i]!=-1){
            cnt ++;
        }
    }
    cout << cnt;
    return 0;
}