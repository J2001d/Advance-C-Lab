#include<stdio.h>

int swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
}

void bubble_sort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	bubble_sort(arr, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}

}
