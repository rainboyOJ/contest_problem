#include <iostream>
using namespace std;
int main(){
    int a,b,d;
    char c;
    cin>>a>>b>>c>>d;
    if(d==1){
        for( int i=1 ; i<=a ; i++){
            for( int j=1 ; j<=b ; j++){
                cout<<c;
            }    
            cout<<endl;
        }
    }
    else{
        for( int j=1 ; j<=b ; j++){
            cout<<c;
        }       
        cout<<endl; 
        for( int q=3 ; q<=a ; q++){
            cout<<c;
            for( int w=3 ; w<=b ; w++){
                cout<<" ";
            } 
            cout<<c;   
            cout<<endl;
        }
        for( int j=1 ; j<=b ; j++){
            cout<<c;
        }      
    }    

    return 0;
}