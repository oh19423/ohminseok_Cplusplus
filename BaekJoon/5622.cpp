#include <iostream>
#include <string>

int main(void) {
	std::string str;

	std::cin >> str;

	int len = str.length(), sum = 0;

	for (int i = 0; i < len; i++) {
		char data = str.at(i);

		if ('A' <= data && data <= 'C') sum += 3;
		else if ('D' <= data && data <= 'F') sum += 4;
		else if ('G' <= data && data <= 'I') sum += 5;
		else if ('J' <= data && data <= 'L') sum += 6;
		else if ('M' <= data && data <= 'O') sum += 7;
		else if ('P' <= data && data <= 'S') sum += 8;
		else if ('T' <= data && data <= 'V') sum += 9;
		else sum += 10;
	}

	std::cout << sum;

	return 0;
}