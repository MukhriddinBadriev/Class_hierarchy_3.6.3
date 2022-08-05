#include "Triangle.h"
#include <iostream>
using namespace std;

	
	Triangle::Triangle(string name1, int new_a, int new_b, int new_c, int new_A, int new_B, int new_C) {
		name = name1;
		a = new_a;
		b = new_b;
		c = new_c;
		A = new_A;
		B = new_B;
		C = new_C;
	}
	void Triangle::print_info()  {
		cout << get_name() << ":\nСтороны: a=" << a << " b=" << b << " c=" << c
			<< "\nУглы: A=" << A << " B=" << B << " C=" << C << "\n\n";
	}