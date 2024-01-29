#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, d;
    char c;
    cin >> a >> b >> c >> d;
    if (d = 0)
    {
        for (int i = 1; i < a; i++)
        {
            for (int i = 1; i < b; i++)
                cout << c;
        }
    }

    return 0;
}