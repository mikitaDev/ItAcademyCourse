#include "display.h"

void print_res2(double& x1, double& x2, char& x3, double& res) {
	std::cout << x1 << x3 << x2 << "=" << res << std::endl;
}

void print_res1(double& x1, double& res, char* x3) {
	std::cout << x1 << x3 << '=' << res << std::endl;
}

void start_print() {
	std::cout << "Author: Mikita Shary\nCalculator support ariphmetical operations like:\n";
	std::cout << "'+'\n";
	std::cout << "'-'\n";
	std::cout << "'*'\n";
	std::cout << "'/'\n";
	std::cout << "'^'\n";
	std::cout << "And additional operation like:\n";
	std::cout << "'log'\n";
	std::cout << "'exp'\n";
	std::cout << "'sqrt'\n";
}
