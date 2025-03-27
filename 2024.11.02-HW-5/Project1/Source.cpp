#include <iostream>
int main(int argc, char* argv[]) {
	int r = 0;
	std::cin >> r;
	int m = 0;
	int* a = (int*)malloc(r * sizeof(int));
	for (int i = 0; i < r; ++i) {
		scanf_s("%d", a + i);
	}
	for (int i = 0; i < r; ++i) {
		if (*(a + i) <= *(a + m)) {
			m = i;
		}
	}
	for (int i = m; i < r; ++i) {
		std::cout << *(a + i) << ' ';
	}
	for (int i = 0; i < m; ++i) {
		std::cout << *(a + i) << ' ';
	}
	free(a);
	return 0;
}
