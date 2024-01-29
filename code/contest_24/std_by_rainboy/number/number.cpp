#include <iostream>
using namespace std;

int n;
int cnt1;
int cnt5;
int cnt10;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        if (t == 1)
            cnt1++;
        if (t == 5)
            cnt5++;
        if (t == 10)
            cnt10++;
    }
    cout << cnt1 << endl;
    cout << cnt5 << endl;
    cout << cnt10 << endl;
    return 0;
}
