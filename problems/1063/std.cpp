#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    string str;
    int i;
    while (  cin >> str) {

        for (i = str.length() - 1; i >= 0; i--) //略过低位的0
        {
            if (str[i] != '0')
                break;
        }
        bool flag = 0;
        for (int j = 0; j <= i; j++)
        {
            if (str[j] != str[i - j])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
