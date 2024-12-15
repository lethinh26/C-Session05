#include <stdio.h>
int main() {
	int i, j=0;
	for (i = 1; i <= 9; i++) {
		j = 1;
		while (j <= 10) {
			printf("%d x %d = %d\n", i, j, i*j);
			j++;
		}
	}
	return 0;
}
