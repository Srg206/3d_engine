#include"Matrix.hpp"
#include<iostream>
Matrix::Matrix(int h, int w) :
	width(w),
	height(h)
{
	data.resize(h, std::vector<double>(w));
	for (size_t i = 0; i < h; i++)
	{
		for (size_t j = 0; j < w; j++)
		{
			data[i][j] = 0;
		}
	}

}

Matrix::Matrix(const Matrix& m) :
	width(m.width),
	height(m.height)
{
	data.resize(height, std::vector<double>(width));

	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			data[i][j] = m.data[i][j];
		}
	}
}

Matrix& Matrix::operator=(const Matrix& m)
{
	height = m.height;
	width = m.width;	
	data.resize(height, std::vector<double>(width));

	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			data[i][j] = m.data[i][j];
		}
	}

	return *this;
}

Matrix Matrix::operator*(double k)
{
	Matrix b(*this);
	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			double q= b(i, j) * k;
			b(i, j)= q;
		}
	}
	return b;
}

Matrix Matrix::operator*(const Matrix& m2)
{
	if (width != m2.height) {
		throw(std::exception("Could multiplay matrix with diffrent width and height"));
	}
	Matrix b (height,m2._width());
	for (size_t j = 0; j < m2.width; j++)
	{
		for (size_t i = 0; i < height; i++)
		{
			double sum = 0;
			for (size_t k = 0; k < width; k++)
			{
				sum += data[i][k] * m2.data[k][j];
			}
			b(i, j) = sum;
		}
	}
	return b;
}

Matrix Matrix::operator+(const Matrix& m2)
{
	if (width != m2.width || height !=m2.height) {
		throw(std::exception("Could sum matrix with diffrent size"));
	}
	Matrix b(*this);
	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			b.data[i][j] = data[i][j] + m2.data[i][j];
		}
	}
	return b;
}

double& Matrix::operator()(int y, int x)
{
	return data[y][x];
}
//
//double Matrix::operator()(int y, int x) const
//{
//	return data[y][x];
//}

int Matrix::_width() const
{
	return width;
}

int Matrix::_height() const 
{
	return height;
}

void Matrix::print() const
{
	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			std::cout << data[i][j];
			std::cout << ' ';
		}
		std::cout << "\n";
	}
		std::cout << "\n";
}
