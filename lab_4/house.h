#pragma once
#include "flat.h"
#include "location.h"
#include "street.h"

class house
{
private:
	flat Flat;// ��������
	location Location;//������������ ����
	street Street; //�������� �����
public:
	void Set(street *street_new, flat *flat_new, location *location_new); // ������� ����� ����� ���������� �������
	void Set_console(); // ������� ����� ����� ������� �������
	void Print();  // ������� ������
};

