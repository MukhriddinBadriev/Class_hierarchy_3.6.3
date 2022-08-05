#include "Quadrangle.h"

	Quadrangle::Quadrangle(string name1, int new_a, int new_b, int new_c, int new_d, int new_A, int new_B, int new_C, int new_D) {
	name = name1;
		a = new_a;
		b = new_b;
		c = new_c;
		d = new_d;
		A = new_A;
		B = new_B;
		C = new_C;
		D = new_D;
	}
	void Quadrangle::print_info() {
		cout << get_name() << ":\nСтороны: a=" << a << " b=" << b << " c=" << c << " d=" << d
				<< "\nУглы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
	}