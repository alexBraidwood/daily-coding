#include <iostream>

typedef unsigned int uint;

int EvenFibSum(uint max);
int EvenFibSum(uint prev, uint current, uint max);

int main() {
	
	std::cout << EvenFibSum(4000000) << std::endl;
	std::cin.ignore();
	return 0;	
}

int EvenFibSum(uint max) {
	return EvenFibSum(0, 1, max); 
}

int EvenFibSum(uint prev, uint current, uint max) {
	int result = (prev + current) % 2 == 0 ? prev + current : 0;
	if (prev + current < max) {
		result += EvenFibSum(current, prev+current, max);
	}
	return result;
}
