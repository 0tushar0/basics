#include <iostream>

int main(){
	std::cout << std::boolalpha << (5 <=> 6 == 0) << '\n';
	std::cout << std::boolalpha << (6 <=> 6 == 0) << '\n';
	std::cout << std::boolalpha << (6 <=> 5 == 0) << '\n';
	return 0;
}
