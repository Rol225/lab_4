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
	void Set(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse); //������� ����� ����� ������� �������
	void Set_console(); //������� ����� ����� ���������� �������
	void Print(); //�����
	/// ����� ������ ��������� ����������
	int Get_distance_school();
	int Get_distance_hospital();
	int Get_distance_kindergarten();
	int Get_num_house();
	char* Get_house_street();
};

