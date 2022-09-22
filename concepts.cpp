#include <concepts>
#include <iostream>

template<typename T>
concept Integral = std::is_integral<T>::value;

template<typename T>
requires Integral<T>
[[nodiscard]] T gcd(T a, T b) noexcept {
	if(b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

template<typename T>
concept Decimal = std::is_floating_point<T>::value;

template<typename T>
requires Decimal<T>
[[nodiscard]] T round(T a) noexcept {
	if(((int)(a * 10)) % 10 >= 5)
		return (double)((int)(a + 1));
	return (double)((int)a);
}

auto main() -> int {
	std::cout << gcd(-25, -15) << '\n';
	std::cout << gcd(-25, 15) << '\n';
	std::cout << gcd(25, -15) << '\n';
	std::cout << gcd(25, 15) << "\n\n";

	//std::cout << round(3) << '\n'; // error
	std::cout << round(3.5) << '\n';
	std::cout << round(3.2) << '\n';
	return 0;
}
