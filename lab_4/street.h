#pragma once
#include <string>

class street
{
private:
	std::string streetName;
	std::string streetDescription;
public:
	void Set(std::string streetName, std::string streetDescription); // ������� ����� ����� ���������� �������
	void Set_console(); // ������� ����� ����� ������� �������
	void Print(); // ������� ������
	/// ������� ������ ������ ��������� ����������
	std::string Get_street_name();
	std::string Get_street_description();
};

