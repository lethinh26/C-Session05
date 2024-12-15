#include <stdio.h>
int main() {
	int num1, num2, i, max;
	printf("Nhap so thu 1: ");
	scanf("%d", &num1);
	printf("Nhap so thu 2: ");
	scanf("%d", &num2);
	if (num1 > num2) {
		max = num1;
	}else {
		max = num2;
	}
	for (i = max; i <= (num1*num2); i++) {
		if (i % num1 == 0 && i % num2 == 0) {
			printf("%d la boi chung nho nhat cua %d va %d", i, num1, num2);
			break;
		}
	}
	return 0;
}
