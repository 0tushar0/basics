#include <cstdio>
#include <iostream>

struct Foo {
	double a = 3.14;
	int b = 42;
	std::string c = "Hello world";

	Foo() = default;

	void print() {
		std::cout << b << ' ' << c << ' ' << a << '\n';
	}
};

class Bar {
private:
	double a = 3.14;
	int b = 42;
	std::string c = "Hello world";

public:
	Bar() = default;

	void print() {
		std::cout << b << ' ' << c << ' ' << a << '\n';
	}
};


int main() {
	Foo f;
	Bar b;
	char *ptr = (char*)(&f);
	int i = 0;
	void *v;

	f.print();
	std::cout << "Iterating Foo\n";
	for(; i < sizeof(Foo); i++) {
		printf("%x  ", *(ptr + i));
	}

	std::cout << "\n\n";

	b.print();
	std::cout << "Iterating Bar\n";
	ptr = (char*)(&b);
	for(i = 0; i < sizeof(Bar); i++) {
		printf("%x  ", *(ptr + i));
	}

	std::cout << "\n\n";

	v = (void*)&f;
	for(i = 0; i < sizeof(Foo); i++) {
		printf("%x  ", *((char*)v + i));
	}

	std::cout << '\n';

	return 0;
}
