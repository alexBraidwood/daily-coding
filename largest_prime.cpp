#include <iostream>
#include <vector>
#include <algorithm>

typedef unsigned long long ulong;

const ulong NUMBER = 600851475143;

std::vector<ulong> getFactors(ulong number);
bool is_prime(ulong n);
ulong next_prime(ulong n);

int main() {
	auto result = getFactors(NUMBER);
	for (auto l : result) {
		std::cout << l << std::endl;
	}
	std::cout << "Max: " <<	*std::max_element(result.begin(), result.end());
	std::cin.ignore();
}

std::vector<ulong> getFactors(ulong number) {
	bool done = false;
	std::vector<ulong> results;
	ulong i = 1;
	ulong j = 1;
	while (i * i < number) {
		if (is_prime(i) && number % i == 0) {
				results.push_back(i);
		}
		++i;
	}
	return results;
}

bool is_prime(ulong n) {
	ulong o = 4;
	for (ulong i = 5; true; i += o) {
		ulong q = n / i;
		if (q < i) {
			return true;
		}
		if (n == q * i) {
			return false;
		}
		o ^= 6;
	}
	return true;
}
