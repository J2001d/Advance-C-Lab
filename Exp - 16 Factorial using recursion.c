#include<stdio.h>
#include<stdlib.h>

int fact(int n) {
	if (n <= 0) {
		return 1;
	}
	return n * fact(n - 1);
}
int main() {
	int n;
	scanf("%d", &n);

	printf("%d", fact(n));
}
