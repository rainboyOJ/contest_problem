#include<bits/stdc++.h>
using namespace std;
int a[50005];
long long b[50005];
int main()
{
    int n,i,j;
	long long s=0;
	cin>>n; 
	for(i=1;i<=n;i++)
	  
	  
	  
	b[1]=0; 
	for(i=2;i<=n;i++)
	{
	   	b[i]=b[i-1]+a[i-1]; 
	}
	for(i=1;i<=n;i++)
	
	
	cout<<s<<endl;
}


