#include <iostream>

// short is 16 bits which is all that's needed for an int's 64bits since 64=2^7, so we need 7 bits

short countNumBits(unsigned int num) {
	int numBitsSet = 0;
	while (num) {
		numBitsSet += num & 1;
		num = num >> 1;
	}	
	std::cout << numBitsSet << std::endl;
	return numBitsSet;
} 

int main() {
	unsigned int a = 234;
	countNumBits(a);
}
