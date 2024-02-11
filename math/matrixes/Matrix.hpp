#ifndef MAIN_MATRIX_CLASS_11_02_24
#define MAIN_MATRIX_CLASS_11_02_24
#include<vector>

class Matrix {
private:
	std::vector<std::vector<double>> data{ 0 };
	int width=0;
	int height=0;
public:
	Matrix()=default;
	Matrix(int h, int w);
	Matrix(const Matrix& m);
	~Matrix() = default;

	Matrix& operator=(const Matrix& m);

	Matrix operator*(double k);
	Matrix operator*(const Matrix& m2);

	Matrix operator+(const Matrix & m2);
	double& operator()(int y, int x);
	//double operator()(int y, int x) const;


	int _width() const;
	int _height() const;

	void print() const ;

};

#endif // !MAIN_MATRIX_CLASS_11_02_24
