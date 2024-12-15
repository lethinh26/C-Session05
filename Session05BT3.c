#include <stdio.h>
int main() {
	int i, num, total=0;
	printf("Nhap 1 so nguyen duong: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		total += i;
	}
	printf("Tong 1+2+3...+n = %d", total);
	return 0;
}
