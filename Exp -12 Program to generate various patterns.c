/*
1
12
123
1234
12345
123456
*/

#include<stdio.h>
#include<stdlib.h>
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < i + 1) {
				printf("%d", j + 1);
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
