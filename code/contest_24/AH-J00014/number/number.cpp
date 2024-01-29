#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i, a, b = 0, c = 0, d = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        if (a == 1)
        {
            b++;
        }
        if (a == 5)
        {
            c++;
        }
        if (a == 10)
        {
            d++;
        }
    }
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    return 0;
}
