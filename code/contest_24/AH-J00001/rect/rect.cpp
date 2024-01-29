#include <bits/stdc++.h>
using namespace std;
int a; // gao
int b; // kuan
char c;
int d;
int main()
{
    cin >> a >> b >> c >> d;
    int f = a - 2;
    int e = b - 2;
    if (d == 1)
    {
        for (int i = 1; i <= a; i++)
        {
            for (int l = 1; l <= b; l++)
            {
                cout << c;
            }
            cout << endl;
        }
    }
    if (d == 0)
    {

        for (int l = 1; l <= b; l++)
        {
            cout << c;
        }
        cout << endl;
        cout << c;
                for (int x = 1; x <= e; x++){
                    cout << " ";    
                }
        cout<<endl;
        cout << c;
        cout << endl;
        for (int l = 1; l <= b; l++)
        {
            cout << c;
        }
    }
    return 0;
}