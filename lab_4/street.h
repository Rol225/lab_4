#pragma once
#include <string>
#include <iostream>

class street
{
private:
	std::string streetName;
	std::string streetDescription;
public:
	street(); // �����������
	street(std::string streetName); // ����������� � ����� ����������
	street(std::string streetName, std::string streetDescription); // �����������
	void Set(std::string streetName, std::string streetDescription); // ������� ����� ����� ���������� �������
	void Set_console(); // ������� ����� ����� ������� �������
	void Print(); // ������� ������
	/// ������� ������ ������ ��������� ����������
	std::string Get_street_name();
	std::string Get_street_description();
};

