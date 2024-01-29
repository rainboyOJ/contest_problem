#include <iostream>
using namespace std;
int n, m;
char c;
int k;
int main()
{
    cin >> n >> m;
    cin >> c >> k;

    for (int i = 1; i <= m; i++)
        cout << c;
    cout << endl;
    for (int i = 1; i <= n - 2; i++)
    {
        cout << c;
        for (int j = 1; j <= m - 2; j++)
        {
            if (k == 0)
                cout << " ";
            else
                cout << c;
        }
        cout << c << endl;
    }

    for (int i = 1; i <= m; i++)
        cout << c;
    cout << endl;
    return 0;
}
