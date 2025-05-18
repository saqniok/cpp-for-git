#include <iostream>

void f(int x) {
	static int x = 0;
	std::cout << ++x << '\n';
	f(x);
}

int main() {
	f(0);
}

