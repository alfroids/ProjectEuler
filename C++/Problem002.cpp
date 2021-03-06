#include <iostream>


int main(int argc, char const *argv[]) {
	size_t a {1};
	size_t b {2};
	size_t sum {2};
	size_t max {4000000};

	while (b <= max) {
		size_t c {a + b};
		a = b;
		b = c;

		if (b % 2 == 0) {
			sum += b;
		}
	}

	std::cout << sum << std::endl;

	return 0;
}
