#include <iostream>
#include <string>

int main() {
	std::string incl = "include <iostream>";
	std::string def = "int main() {";
	std::string print = "\tstd::cout << \"Hello, world!\" << std::endl;";
	std::string ret = "\treturn 0;";
	std::string end = "}";

	std::cout << incl << std::endl << std::endl
		<< def << std::endl
		<< print << std::endl
		<< ret << std::endl
		<< end << std::endl;

	return 0;
}