#include <stdio.h>
int main() {
	int num1, num2, choose;
	while (1) {
		printf("%12s\n\n","CACULATOR");
		printf("1. Tong 2 so\n");
		printf("2. Hieu 2 so\n");
		printf("3. Tich 2 so\n");
		printf("4. Thuong 2 so\n");
		printf("5. Thoat\n");
	
		printf("Chon phep tinh (1->5): ");
		scanf("%d", &choose);
		if (choose == 5) {
			break;
		}
		printf("Nhap so thu 1: ");
		scanf("%d", &num1);
		printf("Nhap so thu 2: ");
		scanf("%d", &num2);
		
		switch(choose) {
			case 1:
				printf("%d + %d = %d\n", num1, num2, num1 + num2);
				break;
			case 2:
				printf("%d - %d = %d\n", num1, num2, num1 - num2);
				break;
			case 3:
				printf("%d x %d = %d\n", num1, num2, num1 * num2);
				break;
			case 4:
				printf("%d / %d = %d\n", num1, num2, num1 / num2);
				break;
			default:
				printf("Khong hop le hay chon lai!\n");
		}
	}
	return 0;
}
