#include <iostream>
using namespace std;
const int maxn= 1e5+5;
int b[maxn]; // 桶 bucket
int n,m;
int sum;

int main()
{
    cin >> n >> m;
    for (int j = 0; j < m; j++)
    {
        int t1,t2;
        cin >> t1 >> t2;
        for(int i = t1;i<=t2;i++) {
            b[i] = 1;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if( b[i] == 0) sum++;
    }
    cout << sum;
    return 0;
}
 