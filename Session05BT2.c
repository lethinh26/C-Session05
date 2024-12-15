#include <stdio.h>
int main() {
	int check = 1, guess, anwser = 4;
	printf("Doan so tu 1 -> 10: ");
	scanf("%d", &guess);
	while(check) {
		if (guess == anwser) {
			check = 0;
		}
		if (check) {
			printf("Doan sai roi hay doan lai: ");
			scanf("%d", &guess);
		}else {
			printf("Ban doan dung roi!");
		}
	}
	return 0;
}
