#include <bits/stdc++.h>
using namespace std;
int k;
int a[105];
int cnt1, cnt5, cnt10;
int main(){
    cin >> k;
    for (int i = 0; i < k; i ++){
        cin >> a[i];

    }
    for (int i = 0; i < k; i ++){
        if (a[i] == 1){
            cnt1++;
        }

    }
    for (int i = 0; i < k; i ++){
        if (a[i] == 5){
            cnt5++;
        }

    }
    for (int i = 0; i < k; i ++){
        if (a[i] == 10){
            cnt10++;
        }

    }
    cout << cnt1 << endl << cnt5 << endl << cnt10;
    return 0;
}