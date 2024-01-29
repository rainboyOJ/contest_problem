#include <bits/stdc++.h>
using namespace std;
int h, w, a;
char s;
int main(){
    cin >> h >> w >> s >> a;
    if (a == 1){
        for (int i = 0; i < h; i++){
            for (int j = 0; j < w; j++){
                cout << s;
            }
            cout << endl;
        }
    }
    if (a == 0){
        for (int i = 0; i < h; i++){
            for (int j = 0; j < w; j++){
                if (i == 0 || i == h-1)
                    cout << s;
                else{
                    if (j == 0 || j == w-1){
                        cout << s;
                    }
                    else
                        cout << ' ';
                }
            }
            cout << endl;
        }
    }
    return 0;
}