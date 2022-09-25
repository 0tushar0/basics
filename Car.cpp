#include <iostream>

class Vehicle {
private:
	int wheels = 4;
	int doors = 4;
	int milage = 0;

public:
	Vehicle() = default;
	Vehicle(int w, int d, int m)
		: wheels{w}
		, doors{d}
		, milage{m}
	{}

	int get_wheels() {
		return wheels;
	}
	int get_doors() {
		return doors;
	}
	int get_milage() {
		return milage;
	}
	void increment_milage() {
		milage++;
		if(milage >= 1000000) {
			milage -= 1000000;
		}
	}
};

class Motorcycle : public Vehicle {
public:
	Motorcycle() : Vehicle(2, 0, 15)
	{}
};

int main() {
	Motorcycle m;
	std::cout << "Wheels = " << m.get_wheels() << '\n'
		<< "Doors = " << m.get_doors() << '\n'
		<< "Milage = " << m.get_milage() << '\n';
	m.increment_milage();
	for(int i = 0; i < 1500000; i++) {
		m.increment_milage();
	}
	std::cout << "New milage = " << m.get_milage() << '\n';
	return 0;
}
