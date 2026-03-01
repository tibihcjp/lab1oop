#include <stdio.h>
int prim(int i) {
	if (i == 0 || i == 1)
		return 0;
	if (i == 2)
		return 1;
	if (i % 2 == 0)
		return 0;
	for (int j = 2; j * j <= i; j++) {
		if (i % j == 0)
			return 0;

	}
	return 1;
}
int main() {
	int n;
	printf("Citeste numarul: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		if (prim(i))
			printf("%d ", i);
	}
	return 0;
}