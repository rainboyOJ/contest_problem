#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	freopen("clock.in","r",stdin);
	freopen("clock.out","w",stdout);
	int x,y,z;
    scanf("%d:%d:%d",&x,&y,&z);
    for (int j=5; j>=0; --j) 
    {
        int tt=(1<<j);
        if (x&tt) printf("1");
        else printf("0");
        if (y&tt) printf("1");
        else printf("0");
        if (z&tt) printf("1");
        else printf("0");            
    }
    printf(" ");
    for (int j=5; j>=0; --j)
        if (x&(1<<j)) printf("1");
        else printf("0");
    for (int j=5; j>=0; --j)
        if (y&(1<<j)) printf("1");
        else printf("0");
    for (int j=5; j>=0; --j)
        if (z&(1<<j)) printf("1");
        else printf("0");
    printf("\n");
	return 0;
}
