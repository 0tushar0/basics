#include <concepts>
#include <iostream>

template<typename T>
concept Integral = std::is_integral<T>::value;

template<typename T>
requires Integral<T>
T gcd(T a, T b) {
	if(b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

auto main() -> int {
	std::cout << gcd(-25, -15) << '\n';
	return 0;
}
