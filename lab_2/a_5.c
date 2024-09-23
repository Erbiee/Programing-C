#include <stdio.h>
#include <math.h>

int main() {
	float x;
	float y;
	printf("input: ");
	scanf("%f %f", &x, &y);

	if (x > 1 || x < 0) {
		printf("NO\n");
	}
	else if (y > 1 || y < 0) {
		printf("NO\n");
	}
	else if ((x * x + y * y <= 1) && (x * x + y * y >= 0.25)) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
}
