#pragma once
#include <string>
class flat
{
private:
	int coin; //����
	int countRoom; //���-�� ������
	int numFlat; //����� ��������
public:
	flat(); // �����������
	flat(int numFlat); // ����������� � ����� ����������
	flat(int coin_2, int countRoom_2, int numFlat_2); // ����������� �� ����� �����������
	void Set(int coin_2, int countRoom_2, int numFlat_2); // ������� ����� ����� ������� �������
	void Set_console();  // ������� ����� ����� ���������� �������
	void Print(); // ������� ������
	/// ������� ������ ������ ��������� ����������
	int Get_coin();
	int Get_count_room();
	int Get_num_flat();
};