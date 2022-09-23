#include <iostream>
#include <ranges>
#include <vector>

int main(){
	std::vector nums{1,2,3,4,5,6,7,8,9,10};
	auto triple = [](int i){
		return i * 3;
	};
	auto quadruple = [](int i){
		return i * 4;
	};

	// multiplications of 12
	for(int i : nums | std::views::transform(triple) 
			 | std::views::transform(quadruple)) {
		std::cout << i << ' ';
	}
	std::cout << '\n';

	return 0;
}
