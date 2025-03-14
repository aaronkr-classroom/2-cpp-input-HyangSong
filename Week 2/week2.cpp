#include <iostream>
#include <string>

int main() {
	std::cout << "What's your name? >>> ";
	std::string name;
	std::cin >> name;
	//*********************
	//*                   *
	//*Hello, Aaron!* // gretting ±Ê¿Ã + 4
	//*                   *
	//*********************
	const std::string greeting = "Hello. " + name + "!";

	const std::string spaces(greeting.size(), ' '); //null
	const std::string line24 = "* " + spaces + " *";
	
	const std::string line15(line24.size(), '*');
	//greeting box
	std::cout << std::endl;
	std::cout << line15 << std::endl;
	std::cout << line24 << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << line24 << std::endl;
	std::cout << line15 << std::endl;

	return 0;
}