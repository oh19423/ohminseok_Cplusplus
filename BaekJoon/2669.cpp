#include <iostream>

int main(void) {
	int x1, x2, y1, y2;
	int adj[101][101] = { 0, };

	for (int i = 0; i < 4; i++) {
		std::cin >> x1 >> y1 >> x2 >> y2;

		for (int i = x1; i < x2; i++) {
			for (int j = y1; j < y2; j++) adj[i][j]++;
		}
	}

	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (adj[i][j]) sum++;
		}
	}

	std::cout << sum;

	return 0;
}