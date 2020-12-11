// Prompt

// Given a Binary Number B, find its decimal equivalent.


#include <iostream>
#include <string>

#define PAUSE std::cout << "\n\n"; system("pause");


int main() {

	std::string B;

	std::cin >> B;
	int pow_of_binary = 0;
	int decimal = 0;

	for (int b = B.size() - 1; b >= 0; b--) {
		if (B[b] == '1') {
			std::cout << "2e" << pow_of_binary << "\n";
			decimal += pow(2,pow_of_binary);
		}
		pow_of_binary++;
	}

	std::cout << "Conversion: " << decimal;

	PAUSE;
	return 0;
}