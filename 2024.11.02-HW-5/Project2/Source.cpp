#include <iostream>
int main(int argc, char* argv[]) {
	int r = 0;
	std::cin >> r;
	int* a = (int*)malloc(r * sizeof(int));
	for (int i = 0; i < r; ++i) {
		scanf_s("%d", a + i);
	}
	int k = 0;
	std::cin >> k;
	k %= r;
	for (int i = r; i < 2 * r; ++i) {
		std::cout << *(a + (i - k) % r) << ' ';
	}
	free(a);
	return 0;
}