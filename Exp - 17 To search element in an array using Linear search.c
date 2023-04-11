// Linear search

#include<stdio.h>
#include<stdlib.h>
int main() {
	int i;
	int n; scanf("%d", &n);

	int arr[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int key; scanf("%d", &key);

	for (i = 0; i < n; i++) {
		if (arr[i] == key) {
			printf("Element Found!");
			exit(0);
		}
	}
	printf("Element not Found");
	return 0;
}
