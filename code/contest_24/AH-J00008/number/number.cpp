#include <bits/std.h>
using namespace std;
int main(){
    int k;
    int i, a, b = 0, c = 0, d = 0;
    cin << k;
    for(i = 1; i <= k; i++) {
        cin >> a;
        if(a == 1) {
            b++;
        }
        if(a == 5) {
            c++;
        }
        if(a == 10) {
            d++;
        }
    }
    return 0;
}