#include <iostream>
#include <string>

// Entry point
int main() {
	// name hold user name
	std::string name;
	// programm need user name
	std::cout << "Please, enter your name: ";
	std::cin >> name;
	// output - user greetings world
	std::cout << "Hello world from " << name << std::endl;
	return 0;
}

