#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

char ss[111111],str[1111];

int main()
{
	freopen("decode.in","r",stdin);
	freopen("decode.out","w",stdout);
    gets(ss);
    gets(str);
    int N=strlen(ss);
    for (int j=0; j<N; ++j)
        if (ss[j]<'A'||ss[j]>'Z') printf("%c",ss[j]);
        else printf("%c",str[ss[j]-'A']);
    printf("\n");
	return 0;
}
