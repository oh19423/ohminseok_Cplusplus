#include <iostream>

void solution(int num) {
	int data = 1, sum = 1;

	while (num >= sum) {
		sum += data; data++;
	}
	sum -= data; data;

	if(data % 2 == 0)
		std::cout << data - (num - sum) << "/" << num - sum;
	else
		std::cout << num - sum << "/" << data - (num - sum);
}

int main(void) {
	int num;

	std::cin >> num;
	solution(num);

	return 0;
}