#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int cnt = 0, ans = 0;
    while (n > 0) {
        cnt++;
        if (ans == 0 && n % 3 == 1) ans = cnt;
        n -= (n + 2) / 3;
    }
    cout << cnt << " " << ans << "\n";
    return 0;
}
