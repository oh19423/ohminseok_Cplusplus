#include <iostream>

int solution(int num) {
	int cnt3 = 0, cnt5 = 0;

	while (num % 5 != 0 && num >= 0) {
		num -= 3;
		cnt3++;
	}

	if (num < 0) return -1;
	else cnt5 = num / 5;

	return cnt3 + cnt5;
}

int main(void) {
	int num;

	std::cin >> num;
	std::cout << solution(num);

	return 0;
}