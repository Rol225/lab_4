#pragma once
class street
{
private:
	char streetName[30];
	char streetDescription[150];
public:
	void Set(char streetName[], char streetDescription[]); // ������� ����� ����� ���������� �������
	void Set_console(); // ������� ����� ����� ������� �������
	void Print(); // ������� ������
	/// ������� ������ ������ ��������� ����������
	char* Get_street_name();
	char* Get_street_description();
};

