#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    char c;
    int ks;
    cin >> h >> w >> c >> ks;
    for(int i = 0;i<w;i++){
        cout << c;
    }
    cout << endl;
    for(int i = 0;i<(h-2);i++){
        if(!ks){
			cout << c;
            for(int j = 0;j<(w - 2);j++){
                cout << " ";
            }
            cout << c << endl;
		}else{
			for(int j = 0;j<w;j++){
				cout << c;
			}
			cout << endl;
		}
    }
    for(int i = 0;i<w;i++){
        cout << c;
    }
    cout << endl;
    return 0;
}
