#include <iostream>
using namespace std;
int main(){
    int k,a,a1=0,a5=0,a10=0;
    cin>>k;
    for( int i=1 ; i<=k ; i++ ){
        cin>>a;
        if(a==1){
            a1++;
        }
        else if(a==5){
            a5++;
        }
        else if(a==10){
            a10++;
        }
    }
    cout<<a1<<endl<<a5<<endl<<a10;

    return 0;
}