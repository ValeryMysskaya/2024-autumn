#include <iostream>
#include <cmath>
int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	int b[100] = { 0 };
	int c = 0;
	int max_num = 1;
	int max_p = 0;
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &b[i]);
	}
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &c);
		if (b[i] * c > max_p) {
			max_p = c * b[i];
			max_num = i + 1;
		}
	}
	printf("%d", max_num);
	return EXIT_SUCCESS;
}