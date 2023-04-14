/*
Input Format: Enter any integer n , For example 5
Output:
120
*/

#include<stdio.h>
#include<stdlib.h>
int main() {
	int n;
	scanf("%d", &n);

	int ans = 1;
	for (int i = 1; i <= n; i++) {
		ans = ans * i;
	}
	printf("%d", ans);
}
