#pragma once
#include<iostream>
#include"Figure.h"

class triangle :public figure
{
public:
	triangle();
	
	triangle(int a, int A); // ��������������
	
	triangle(int a, int c, int A); //��������������
	
	triangle(int a, int b, int c, int A, int B);  // �������������
	
	triangle(int a, int b, int c, int A, int B, int C);  // �����������
	
	void Tell();

protected:
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	std::string tri;
	std::string stor = "�������:\t";
	std::string ugl = "����:\t\t";
};
