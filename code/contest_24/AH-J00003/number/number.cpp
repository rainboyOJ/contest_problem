#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,o = 0,f = 0,t = 0,temp;
    cin >> k;
    for(int i = 0;i<k;i++){
        cin >> temp;
        if(temp == 1)
            o++;
        if(temp == 5)
            f++;
        if(temp == 10)
            t++;
    }
    cout << o << endl << f << endl << t << endl;
    return 0;
}
