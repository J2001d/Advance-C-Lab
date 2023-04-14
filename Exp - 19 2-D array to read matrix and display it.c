/*
Input Format :

5
2 5 6
3 5 4
2 5 4

Output Format:

2 5 6
3 5 4
2 5 4


*/
#include<stdio.h>

int main() {
	// size of matrix
	int n;
	scanf("%d", &n);
	int a[n][n];
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
