#include <iostream>

int main(void) {
	int num, H, W, N;

	std::cin >> num;

	for (int i = 0; i < num; i++) {
		std::cin >> H >> W >> N;

		int floor = N % H;
		int room = N / H + 1;
		
		if (floor == 0) {
			room--;
			floor = H;
		}
		
		std::cout << floor * 100 + room << std::endl;
	}
	return 0;
}