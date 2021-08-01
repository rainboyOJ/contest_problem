#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


const int MaxP=1300000;
bool v[MaxP+10];
int p[111111],N;

			

int main()
{
	freopen("gap.in","r",stdin);
	freopen("gap.out","w",stdout);
	
    memset(v,0,sizeof(v));
	p[0]=0;
    for (int i=2; i<=MaxP; ++i) if (!v[i])
    {
        p[++p[0]]=i;
        v[i]=1;
        int t=MaxP/i+1;
        if (t<i) continue;
        t=i*i;
        while (t<MaxP)
        {
            v[t]=1;
            t+=i;
        }
    }

	scanf("%d",&N);
    int* t=upper_bound(p+1,p+p[0]+1,N);
    if ((*(t-1))==N) printf("0\n");
    else printf("%d\n",(*t)-(*(t-1)));	

	return 0;

}
