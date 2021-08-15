#include<bits/stdc++.h>
using namespace std;
int n, test[105], ans = 0; 
int recursion(int m){
	if(m == 0) return -1;
	while(m>=1){
		if(m % 2 == 1) m--;
		else if(m % 2 == 0) m /= 2;
		ans++;
	}
	return ans-1;
}
int main(){
	//freopen("choose.in","r",stdin);
	//freopen("choose.ans","w",stdout);
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> test[i];
	for(int i = 1; i <= n; i++){
		cout << recursion(test[i]) << endl;
		ans = 0;
	}
	return 0;
}
