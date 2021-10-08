#include "operations.h"
#include "display.h"



void repack() {

	double a = 0, b = 0, res;
	char c[100] = "0";

	std::cin >> a;
	std::cin >> c;

	if (c[0] == 'l' and c[1] == 'o' and c[2] == 'g') {
		res = log(a);
		print_res1(a, res, &c[0]);

	}
	else if (c[0] == 'e' and c[1] == 'x' and c[2] == 'p') {

		res = exp(a);
		print_res1(a, res, &c[0]);

	}
	else if (c[0] == 's' and c[1] == 'q' and c[2] == 'r' and c[3] == 't') {
		res = sqrt(a);
		print_res1(a, res, &c[0]);
	}

	else {
		std::cin >> b;
		switch (c[0])
		{
		case '+':
			res = a + b;

			break;
		case '-':
			res = a - b;

			break;
		case '*':
			res = a * b;

			break;
		case '/':
			res = a / b;

			break;
		case '^':
			res = pow(a, b);
			break;

		default:
			std::cout << "ERROR\nINCORRECT INPUT\nRESTART PROGRAM AND INPUT A VALUES SEPARATED BY SPACE AND THEN PRESS ENTER\n";
			a = 0, b = 0, res;
			c[0] = '0';
			break;

		}

		print_res2(a, b, c[0], res);

	}
}
