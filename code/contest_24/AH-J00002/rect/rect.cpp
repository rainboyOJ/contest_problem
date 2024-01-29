#include<bits/stdc++.h>
using namespace std;
int l;//高
int s;//宽
char n;
int t;
void cout_ln()//输出一行n
{
    for(int i=l;i>0;--i)
    {
        cout<<n;
    }
    cout<<endl;
}
void cout_kn()//输出一行“n____...n”
{
    cout<<n;
    for(int i=s-2;i>0;--i)
    {
    cout<<" ";
    }
    cout<<n<<endl;
}
int main()
{
    cin>>l>>s>>n>>t;
    cout_ln();
    if(t==1)
    {
        for(int i=l-2;i>0;--i)
        {
            cout_ln();
        }
    }
    else
    {
        for(int i=l-2;i>0;--i)
        {
            cout_kn();
        }
    }
    cout_ln();
    return 0;
}