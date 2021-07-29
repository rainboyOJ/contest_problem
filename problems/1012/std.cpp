#include<bits/stdc++.h>
using namespace std;
const int N=1000010;
int a[N];
int main(){
	int w,n; 
	cin>>w>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	
	
	
	int l=1,r=n,ans=0;
	while(l<=r){
		if(a[r]+a[l]<=w) l++;
	
	
	
	}
	cout<<ans<<endl;
	return 0;
}

