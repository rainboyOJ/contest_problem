#include<bits/stdc++.h>
using namespace std;
int main() {
	int l, n, i, j, count = 0;
	scanf("%d%d", &l, &n);
	bool *tree = new bool[l + 1];

	for (i = 0; i < l+1; i++) {
		tree[i] = true;
	}
	
	for (i = 0; i < n; i++) {
		int begin, end;
		scanf("%d%d", &begin, &end);
		j = begin;
		while (j <= end)
		{
			tree[j] = false;
			j++;
		}
	}
	for (i = 0; i < l + 1; i++) {
		if (tree[i] == true)count++;
	}
	printf("%d", count);
        delete []tree;

	return 0;
}