#include <stdio.h>
int main() {
	int num1, num2, i;
	printf("Nhap so thu 1: ");
	scanf("%d", &num1);
	printf("Nhap so thu 2: ");
	scanf("%d", &num2);
	for (i = num1; i >= 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			printf("%d la uoc chung lon nhat cua %d va %d", i, num1, num2);
			break;
		}
	}
	return 0;
}
