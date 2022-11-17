#include <iostream>

consteval int square(int n){
	return n * n;
}

int main(){
	const int x{5};
	const int y = square(x);
	std::cout << y << '\n';
	return 0;
}
