/*
Output 

Press 1 to add
Press 2 to subtract
Press 3 to exit
1
Enter Two numbers to add
5 6
Addition is : 11
*/

#include<stdio.h>
#include<stdlib.h>
int menu() {
	printf("\nPress 1 to add\n");
	printf("Press 2 to subtract\n");
	printf("Press 3 to exit\n");
	int choice;
	scanf("%d", &choice);
	return choice;
}
int main() {
	while (1) {
		int choice = menu();
		switch (choice) {
		case 1: {
			printf("Enter Two numbers to add\n");
			int x, y;
			scanf("%d %d", &x, &y);
			printf("Addition is : %d\n", x + y);
			break;
		}
		case 2: {
			printf("Enter Two numbers to sub\n");
			int x, y;
			scanf("%d %d", &x, &y);
			printf("Addition is : %d\n", x - y);
			break;
		}
		case 3: {
			exit(0);
		}
		}
	}
}
