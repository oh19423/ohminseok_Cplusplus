#include <iostream>
int count = 0;

void solution(int num) {
	int cnt = 0;

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) cnt++;
	}

	if (cnt == 2) count++;
}

int main(void) {
	int num;

	std::cin >> num;

	for (int i = 0; i < num; i++) {
		int data;

		std::cin >> data;

		solution(data);
	}

	std::cout << count << std::endl;

	return 0;
}