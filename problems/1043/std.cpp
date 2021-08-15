#include<bits/stdc++.h>
using namespace std;
long long ksm(long long a,long long b,long long n){
	long long x,ans=1;
	if(b==0){
		return 1%n;
	}
	if(b%2==0){
		x=b/2;
		ans=ksm(a,x,n);
		return ans*ans%n;
	}
	else{
		x=(b-1)/2;
		ans=ksm(a,x,n);
		return ans*ans*a%n;
	}
}
int main(){
	//freopen("flandre.in","r",stdin);
	//freopen("flandre.out","w",stdout);
	long long n,m,k,x;
	cin>>n>>m>>k>>x;
	long long z=(x+ksm(10,k,n)*m)%n;
	cout<<z;
	return 0;
}
 
