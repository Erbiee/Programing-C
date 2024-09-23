#include <stdio.h>

int main() {
	float t;
	char c;
	printf("input: ");
	scanf("%f %c", &t, &c);

	if (c == 'c' || c == 'C') {
		printf("%.2f\n", ((t * 9 / 5) + 32));
	}
	else if (c == 'f' || c == 'F') {
		printf("%.2f\n", ((t - 32) * 5 / 9));
	}
	else {
		printf("error\n");
	}
}
