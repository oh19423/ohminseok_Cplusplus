#include <iostream>
#include <stack>
#include <cstring>

int main(void) {
	std::stack <int> s;
	int num, data; char str[1010];
	
	std::cin >> num;

	for (int i = 0; i < num; i++) {
		std::cin >> str;

		if (strcmp(str, "push") == 0) {
			std::cin >> data;
			s.push(data);
		}
		else if (strcmp(str, "pop") == 0) {
			if (!s.empty()) {
				std::cout << s.top() << std::endl;
				s.pop();
			}
			else std::cout << "-1" << std::endl;
		}
		else if (strcmp(str, "top") == 0) {
			if (!s.empty()) {
				std::cout << s.top() << std::endl;
			}
			else std::cout << "-1" << std::endl;
		}
		else if (strcmp(str, "size") == 0) {
			std::cout << s.size() << std::endl;
		}
		else {
			if (!s.empty()) {
				std::cout << "0" << std::endl;
			}
			else std::cout << "1" << std::endl;
		}
	}

	return 0;
}