#include <cmath>
#include <iostream>

long long Fact(int N, int total) {
	if (N <= 1) {
		return total;
	}
		
	if (total < 1) {
		return Fact(N-1, (N * (N-1)));
	} else if (N > 1) {
		return Fact(N-1, (total * (N-1)));
	}
}

int main() {
	auto logResult = log(Fact(7, 0));
	auto factResult = Fact(7, 0);
	std::cout << "Log: " << logResult << std::endl;
	std::cout << "Factorial: " << factResult << std::endl;
	return 0;
}
