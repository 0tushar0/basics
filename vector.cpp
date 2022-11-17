#include <iostream>
#include <ranges>
#include <vector>

int main(){
	const std::vector v{1,2,3,4,5};
	
	for(const int sz = v.size();
		int i : std::views::iota(0, sz))
	{
		if (auto f = v.begin() + i;
			f != v.end())
		{
			std::cout << *f << '\n';
		}
	}
	return 0;
}
