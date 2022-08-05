#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include "Right_Triangle.h"
#include "Isosceles_Triangle.h"
#include "Equilateral_Triangle.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Square.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	Triangle triangle("Треугольник", 10, 20, 30, 50, 60, 70);
	Right_Triangle r_t("Прямоугольный треугольник", 10, 20, 30, 50, 60);
	Isosceles_Triangle i_t("Равнобедренный треугольник", 10, 20, 50, 60);
	Equilateral_Triangle e_t("Равносторонний треугольник", 30);
	Quadrangle quadrangle("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80);
	Parallelogram parallelogram("Параллелограмм", 20, 30, 30, 40);
	Rectangle rectangle("Прямоугольник", 10, 20);
	Rhombus rhombus("Ромб", 30, 30, 40);
	Square square("Квадрат", 20);

	print(&triangle);
	print(&r_t);
	print(&i_t);
	print(&e_t);
	print(&quadrangle);
	print(&rectangle);
	print(&square);
	print(&parallelogram);
	print(&rhombus);

    return 0;
}