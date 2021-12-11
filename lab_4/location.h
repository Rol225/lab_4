#pragma once
#include <string>
#include <iostream>
class location
{
private:
	int distanceSchool; //���������� �� �����
	int distanceHospital;//���������� �� ��������
	int distanceKindergarten;//���������� �� �������� ����
	std::string houseStreet; //����� ����
	int numHouse;
public:
	location(); // �����������
	location(int numHouse); // ����������� c ����� ����������
	location(int distanceSchool, int distanceHospital, int distanceKindergarten, std::string houseStreet, int numHouse); // ����������� �� ����� �����������
	//�������� ������ �� �������������� �����
	friend int* Int_value_location(location& location); // ������������� �������
	void Set(int distanceSchool, int distanceHospital, int distanceKindergarten, std::string houseStreet, int numHouse); //������� ����� ����� ������� �������
	void Set_console(); //������� ����� ����� ���������� �������
	void Print(); //�����
	/// ����� ������ ��������� ����������
	std::string Get_house_street();
};

