// Binary search
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i;
	int n; scanf("%d", &n);
	// sorted array
	int arr[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int key; scanf("%d", &key);
	int L = 0;
	int H = n - 1;
	while (L <= H) {
		int mid = (L + H) / 2;
		if (arr[mid] == key) {
			printf("Element Found!\n");
			exit(0);
		}
		else if (arr[mid] < key) {
			L = mid + 1;
		} else {
			H = mid - 1;
		}
	}
	printf("Element not Found!\n");
	return 0;
}
