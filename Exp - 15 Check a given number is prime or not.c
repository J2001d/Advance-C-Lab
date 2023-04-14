/*
Input Format:
7

Output Format:
1
*/

#include<stdio.h>
#include<stdlib.h>

int checkPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int n;
	scanf("%d", &n);

	printf("%d", checkPrime(n));
}
