#include<iostream>
#include<string>
#include"Figure.h"
#include"triangle.h"
#include"equilateral.h"
#include"rectangular.h"
#include"isosceles.h"
#include"parallellogram.h"
#include"rectangle.h"
#include"quadrilateral.h"
#include"rhomb.h"
#include"square.h"



int main() {

	setlocale(LC_ALL, "Russian");

	// �����������
	triangle q(2, 2, 2, 30, 30, 30);
	q.Tell();


	// ��������������
	equilateral a(4, 5);
	a.Tell();

	// �������������
	rectangular b(3, 4, 5, 60, 80);
	b.Tell();


	// ��������������
	isosceles c(22, 10, 45);
	c.Tell();

	// ���������������
	quadrilateral d(44, 44, 44, 44, 80, 100, 80, 100);
	d.Tell();

	// �������������
	rectangle e(500, 500);
	e.Tell();

	// �������
	square m(1000);
	m.Tell();

	// ��������������
	parallellogram n(10, 10, 70, 110);
	n.Tell();

	// ����
	rhomb v(35, 10, 170);
	v.Tell();





}
