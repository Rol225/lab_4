#pragma once
class location
{
private:
	int distanceSchool; //���������� �� �����
	int distanceHospital;//���������� �� ��������
	int distanceKindergarten;//���������� �� �������� ����
	char houseStreet[30]; //����� ����
	int numHouse;
public:
	void Location�ompletion(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse); //������� ����� ����� ������� �������
	void Location�ompletion_console(); //������� ����� ����� ���������� �������
	void LocationViwe(); //�����
	/// ����� ������ ��������� ����������
	int Out_distanceSchool();
	int Out_distanceHospital();
	int Out_distanceKindergarten();
	int Out_numHouse();
	char* Out_houseStreet();
};

