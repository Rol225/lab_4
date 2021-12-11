#pragma once
#include "flat.h"
#include "location.h"
#include "street.h"
#include <string>

class house
{
private:
	flat Flat;// ��������
	location Location;//������������ ����
	street Street; //�������� �����
	static int countData; // ���-�� ����� � ����
public:
	house(); // �����������
	house(street* street_new, flat* flat_new, location* location_new); // ����������� � �����������
	house(street* street_new); // ����������� � ����� ����������
	house(const house& house_new); // ����������� �����������
	house& operator=(const house& house_new); // ������������� �������� ������������
	house* array_houses(int size); // ������ �����
	void Set(street *street_new, flat *flat_new, location *location_new); // ������� ����� ����� ���������� �������
	void Set_console(); // ������� ����� ����� ������� �������
	void Print();  // ������� ������
	static int CountData(); // ������ �������
};

