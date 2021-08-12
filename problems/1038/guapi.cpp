#include <bits/stdc++.h>
using namespace std;

int a[100][100], b[100][100]={0};
int n, x, y;

void dfs (int x,int y) {  //����û�б�1��Χ��0.
    if(x > n || x < 1 || y > n || y < 1 || a[x][y] != 0)  //�ж��Ƿ�Խ�� 
        return;
    a[x][y] = 1;  //��û�б�1��Χ��0�޸�Ϊ1 
    dfs (x + 1, y);
    dfs (x - 1, y);
    dfs (x, y + 1);
    dfs (x, y - 1);  //�ĸ����� 
}

int main () {   
	//freopen ("guapi.in", "r", stdin);
	//freopen ("guapi.out", "w", stdout);
    scanf ("%d", &n);
    for (int i = 1; i <= n; i ++) {
    	for (int j = 1; j <= n; j ++) {
            cin >> a[i][j];
            if(a[i][j] == 1) b[i][j] = -1;  //b������ԭ��1��λ�� 
        }
	}
    int flag = 0;
    for (int i = 1; i <= n; i ++) {  //�ѵ�i�еĵ�һ�к͵�n��
    	if (a[i][1] != 1) dfs (i, 1);
    	if (a[i][n] != 1) dfs (i, n);
    }
    for (int i = 1; i <= n; i ++) {  //�ѵ�i�еĵ�һ�к͵�n��
    	if (a[1][i] != 1) dfs (1,i);
    	if (a[n][i] != 1) dfs (n,i);   
    }
    
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= n; j ++) {
            if (b[i][j] == -1) printf ("1 ");
            else if (a[i][j] == 0) printf ("2 ");
            else printf ("0 ");
        }
        printf ("\n");
    }
	//fclose(stdin); fclose(stdout);
    return 0;
}
