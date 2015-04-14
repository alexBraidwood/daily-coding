#include <iostream>

long long results[90];

long long F(int N) {
	if (N == 0) return 0;
	if (N == 1) return 1;
	return results[N-1] + results[N-2];
}

int main() {
	for (int N = 0; N < 90; N++) {
		results[N] = F(N);
		std::cout << N << " " << results[N] << std::endl;
	}
	return 0;
}

