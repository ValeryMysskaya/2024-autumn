#include <iostream>
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int k = 0;
	int b[1001] = { 0 };
	for (int i = 1; i <= n; ++i) {
		scanf_s("%d", &b[i]);
	}
	int l = 0;
	int r = 0;
	scanf_s("%d", &l);
	scanf_s("%d", &r);
	k = l;
	for (int i = l + 1; i <= r; ++i) {
		if (b[i] > b[k]) {
			k = i;
		}
	}
	printf("%d\n", b[k]);
	printf("%d", k);
	return EXIT_SUCCESS;
}