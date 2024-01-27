#include<bits/stdc++.h>
using namespace std;
int n;
int a,b;
int sum=0;
int main(){
	//freopen("singer.in","r",stdin);
	//freopen("singer.out","w",stdout);
	cin>>n;
	cin>>a;
	for(int i=2;i<=n;i++){
		cin>>b;
		sum+=abs(a-b);
		a=b;
	}
	cout<<sum;
	
	return 0;
}
