#include <stdio.h>

int main() {
	int h;
	scanf("%d", &h);
	int mid = (h - 1) / 2 + 1;

	for (int i = 0; i < mid; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}

		for (int j = i; j < mid; j++) {
			printf("%c", 65 + j);
		}
		for (int j = mid - 2; j >= i; j--) {
			printf("%c", 65 + j);
		}
		printf("\n");
	}
	for (int i = mid - 2; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}

		for (int j = i; j < mid; j++) {
			printf("%c", 65 + j);
		}
		for (int j = mid - 2; j >= i; j--) {
			printf("%c", 65 + j);
		}
		printf("\n");
	}
}
