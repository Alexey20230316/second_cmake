#include<iostream>
#include"triangle.h"
#include"Figure.h"

triangle::triangle()
{
}

triangle::triangle(int a, int A) // ��������������
{
	this->a = a;
	this->b = a;
	this->c = a;
	this->A = A;
	this->B = A;
	this->C = A;
	this->tri = "�������������� �����������:";
}
triangle::triangle(int a, int c, int A) //��������������
{
	this->a = a;
	this->b = a;
	this->c = c;
	this->A = A;
	this->B = (180 - A) / 2;
	this->C = B;
	this->tri = "�������������� �����������:";
}
triangle::triangle(int a, int b, int c, int A, int B)  // �������������
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = 90;
	this->tri = "������������� �����������:";
}
triangle::triangle(int a, int b, int c, int A, int B, int C)  // �����������
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	this->tri = "T����������:";
}

void triangle::Tell()
{	
	std::cout << tri << std::endl;
	std::cout << stor << "a = " << a << "  " << "b = " << b << "  " << "c = " << c << std::endl;
	std::cout << ugl << "A = " << A << "  " << "B = " << B << "  " << "C = " << C << std::endl << std::endl;
};