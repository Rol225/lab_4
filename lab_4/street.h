#pragma once
class street
{
private:
	char streetName[30];
	char streetDescription[150];
public:
	void Street�ompletion(char streetName[], char streetDescription[]); // ������� ����� ����� ���������� �������
	void Street�ompletion_console(); // ������� ����� ����� ������� �������
	void StreetView(); // ������� ������
	/// ������� ������ ������ ��������� ����������
	char* Out_streetName();
	char* Out_streetDescription();
};

