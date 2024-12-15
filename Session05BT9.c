#include <stdio.h>
int main() {
	int num1, num2, num3, choose;
	while (1) {
		printf("%8s\n\n","MENU");
		printf("1. Nhap 3 so\n");
		printf("2. Tong 3 so\n");
		printf("3. Trung binh cong 3 so\n");
		printf("4. So lon nhat\n");
		printf("5. So nho nhat\n");
		printf("6. Thoat\n");
	
		printf("Chon so (1->6): ");
		scanf("%d", &choose);
		if (choose == 6) {
			break;
		}
		switch(choose) {
			case 1:
				printf("Nhap so thu 1: ");
				scanf("%d", &num1);
				printf("Nhap so thu 2: ");
				scanf("%d", &num2);
				printf("Nhap so thu 3: ");
				scanf("%d", &num3);
				break;
			case 2:
				printf("%d + %d + %d = %d\n", num1, num2, num3, num1 + num2 + num3);
				break;
			case 3:
				printf("Trung binh cong 3 so = %d\n", (num1 + num2 + num3)/3);
				break;
			case 4:
				if (num1 > num2 && num1 > num3) {
					printf("So lon nhat la: %d\n", num1);
				}else if (num2 > num1 && num2 > num3) {
					printf("So lon nhat la: %d\n", num2);
				}else if (num3 > num1 && num3 > num2) {
					printf("So lon nhat la: %d\n", num3);
				}
				break;
			case 5:
				if (num1 < num2 && num1 < num3) {
					printf("So be nhat la: %d\n", num1);
				}else if (num2 < num1 && num2 < num3) {
					printf("So be nhat la: %d\n", num2);
				}else if (num3 < num1 && num3 < num2) {
					printf("So be nhat la: %d\n", num3);
				}
				break;
			default:
				printf("Khong hop le hay chon lai!\n");
				break;
		}
	}
	return 0;
}
