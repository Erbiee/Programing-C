#include <stdio.h>

int main() {
	int h, cnt_sym;
	scanf("%d", &h);
	int mid = (h - 1) / 2 + 1;

	for (int i = 0; i < mid; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}

		cnt_sym = h - i * 2;
		for (int j = i; j < mid; j++) {
			printf("%c", 65 + j);
		}
		for (int j = mid - 2; j >= i; j--) {
			printf("%c", 65 + j);
		}
		printf("\n");
	}
	for (int i = 0; i < mid - 1; i++) {
		for (int j = 0; j < (h - 1) / 2 - 1 - i; j++) {
			printf(" ");
		}

		cnt_sym = 3 + 2 * i;
		for (int j = mid - 2 - i; j < mid; j++) {
			printf("%c", 65 + j);
		}
		for (int j = mid - 2, k = 0; k < (cnt_sym - 1) / 2; j--, k++) {
			printf("%c", 65 + j);
		}
		printf("\n");
	}
}
