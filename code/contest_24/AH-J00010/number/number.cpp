#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int t = 0;
    int s = 0;
    int q = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        if (i == 1)
            t++;
        if (i == 5)
            s++;
        if (i == 10)
            q++;
    }
    cout << t << endl;
    cout << s << endl;
    cout << q << endl;
    return 0;
}