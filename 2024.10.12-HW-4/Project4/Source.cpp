#include <iostream>
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int k = 0;
	int b[1000] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &b[i]);
		if (b[1] > b[n - 2]) {
			k = b[n - 1] + b[0] + b[1];
		}
		else {
			k = b[n - 2] + b[n - 1] + b[0];
		}
	}
	for (int i = 1; i < n - 1; ++i) {
		if (b[i] + b[i - 1] + b[i + 1] > k) {
			k = b[i] + b[i - 1] + b[i + 1];
		}
	}
	printf("%d", k);
	return EXIT_SUCCESS;
}