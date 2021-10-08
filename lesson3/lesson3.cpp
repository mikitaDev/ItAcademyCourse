// lesson3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>


#define SIZE(a)             std::cout << typeid(a).name() \
                            << sizeof(a) << std::endl;


#define MINVAL(type)        std::cout << std::numeric_limits<type>::min();
#define MAXVAL(type)        std::cout << std::numeric_limits<type>::max();

void fill(std::string& a);


void output(const std::string& s) {
	std::cout << "SIZE:"<<sizeof(s)<<"\n" << s << std::endl;
	char a = s[0];
	std::cout << a;

}


int main()
{
	int a;
	char b;
	float c;
	double d;

	constexpr float pi_value = 3.14159f;
	const int A = 10;

	std::string s = "";

	while (1)
	{
		std::cin >> s;
		output(s);
	}
}



void fill(std::string& a) {
	if (!a.empty()) 
	{
		std::cout << a;
		a.clear();
	}
	std::cout << "ENTER NEW STR:";
	std::cin >> a;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
