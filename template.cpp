#include <array>
#include <iostream>
#include <type_traits>

template<typename T1, typename T2>
concept Dimension = std::extent<T1, 1>::value == std::extent<T2, 0>::value;

template<typename T, typename T1, typename T2>
requires Dimension<T1, T2>
[[nodiscard]] T multiply(T1 a, T2 b) {
	std::array<
		std::array<
			T,
			std::extent<T2, 1>::value
		>,
		std::extent<T1, 0>::value
	> ans;
	return ans;
}

int main() {
	return 0;
}
