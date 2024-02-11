#include"../../../math/matrixes/Matrix.hpp"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"





TEST_CASE("matrix multiply") {

	Matrix a(4, 2);
	Matrix b(2, 3);
	for (size_t i = 0,k =0; i < a._height(); i++)
	{
		for (size_t j = 0; j < a._width(); j++)
		{
			a(i, j) = k;
			k++;
		}
	}	
	for (size_t i = 0, k =0; i < b._height(); i++)
	{
		for (size_t j = 0; j < b._width(); j++)
		{
			b(i, j) = k;
			k++;
		}
	}


	b=b * 6.10089;
	b.print();

}
TEST_CASE("ctor") {
	Matrix a;
	a.print();
	Matrix b(4,4);
	for (size_t i = 0, k = 0; i < b._height(); i++)
	{
		for (size_t j = 0; j < b._width(); j++)
		{
			b(i, j) = k;
			k++;
		}
	}
	Matrix c(b);
	c.print();
}
TEST_CASE("+") {
	Matrix a(4, 4);
	Matrix b(4, 4);
	for (size_t i = 0, k = 0; i < a._height(); i++)
	{
		for (size_t j = 0; j < a._width(); j++)
		{
			a(i, j) = k;
			k++;
		}
	}
	for (size_t i = 0, k = 0; i < b._height(); i++)
	{
		for (size_t j = 0; j < b._width(); j++)
		{
			b(i, j) = k;
			k++;
		}
	}
	(a + b).print();


}

TEST_CASE("()") {
	Matrix a(4, 4);
	for (size_t i = 0, k = 0; i < a._height(); i++)
	{
		for (size_t j = 0; j < a._width(); j++)
		{
			a(i, j) = k;
			k++;
		}
	}

	std::cout<< a(2, 2);
	a(2, 2) = 3.4;

}