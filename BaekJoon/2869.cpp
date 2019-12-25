#include <iostream>

int solution(int A, int B, int V) {
	return (V - B - 1) / (A - B) + 1;
}

int main(void) {
	int A, B, V;

	std::cin >> A >> B >> V;
	std::cout << solution(A, B, V);

	return 0;
}