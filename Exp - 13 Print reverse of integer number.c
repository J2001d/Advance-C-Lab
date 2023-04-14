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

	while (n > 0) {
		printf("%d", n % 10);
		n /= 10;
	}
}
