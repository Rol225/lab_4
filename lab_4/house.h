#pragma once
#include "flat.h"
#include "location.h"
#include "street.h"

class house
{
private:
	flat flat;// ��������
	location location;//������������ ����
	street street; //�������� �����
public:
	void House�ompletion(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, int coin, int countRoom, int numFlat, char streetDescription[150]); // ������� ����� ����� ���������� �������
	void House�ompletion_console(); // ������� ����� ����� ������� �������
	void House_view();  // ������� ������
};

