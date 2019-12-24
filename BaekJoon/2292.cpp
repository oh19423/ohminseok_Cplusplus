#include <iostream>

int solution(int num) {
	if (num == 1) return 1;
	
	int i = 1, sum = 0;

	while (num > 1 + 6 * (i + sum)) {
		sum += i;
		i++;
	}

	return i + 1;
}

int main(void) {
	int num;

	std::cin >> num;
	std::cout << solution(num);

	return 0;
}