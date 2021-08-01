#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

const long long MOD=1000000007;
const int MaxN=111111;
int N;
long long f[MaxN];

int main()
{
	freopen("palin.in","r",stdin);
	freopen("palin.out","w",stdout);
	scanf("%d",&N);
    f[0]=1;
    f[1]=2;
    for (int i=2; i<=N; ++i)
    {

        f[i]=f[i/2];
        f[i]+=f[i-1];
		f[i]%=MOD;
    }
	cout<<(f[N]-f[N-1]+MOD)%MOD<<endl;
	return 0;
}
