#include <string>
#include <iostream>

// Entry точка
int main() {
	// name hold имя пользователя
	std::string name;
	// programm need user name
	std::cout << "Please, enter your name: ";
	std::cin >> name;
	// Процесс вывода в поток вывода, который в консоль
	// output - user greetings world
	std::cout << "Hello world from " << name << std::endl;

	// Стоит поменять текст, как нибудь потом
	
	return 0;
}

