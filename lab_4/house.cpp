#define _CRT_SECURE_NO_WARNINGS
#include "house.h"
#include <iostream>

void house::Set(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, int coin, int countRoom, int numFlat, char streetDescription[150])
{
	location.Set(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse);
	flat.Set(coin, countRoom, numFlat);
	street.Set(houseStreet, streetDescription);
}

void house::Set_console()
{
	int distanceSchool, distanceHospital, distanceKindergarten, numHouse, coin, countRoom, numFlat;
	char streetDescription[150];
	char houseStreet[30];

	memset(&streetDescription, 0, sizeof(streetDescription));
	memset(&houseStreet, 0, sizeof(houseStreet));

	printf("\n�������� ���������� �� �����: ");
	while (scanf("%d", &distanceSchool) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("�������� ���������� �� ��������: ");
	while (scanf("%d", &distanceHospital) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("�������� ���������� �� �������� ����: ");
	while (scanf("%d", &distanceKindergarten) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("�������� ��������� ��������: ");
	while (scanf("%d", &coin) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("�������� ���-�� ������: ");
	while (scanf("%d", &countRoom) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("����� ����: ");
	while (scanf("%d", &numHouse) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("����� ��������: ");
	while (scanf("%d", &numFlat) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("\n�����: "); scanf("%s", &houseStreet); while (getchar() != '\n');
	printf("�������� �����: "); gets_s(streetDescription, 150);

	location.Set(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse);
	flat.Set(coin, countRoom, numFlat);
	street.Set(houseStreet, streetDescription);

	
}

void house::Print()
{
	int test = 0;
	printf("\n  �����: %s, ��� %d\n", location.Get_house_street(), location.Get_num_house());
	printf("  ����� ��������: %d\n",flat.Get_num_flat());
	printf("  ���������� �� �����: %d ��\n", location.Get_distance_school());
	printf("  ���������� �� ��������: %d ��\n", location.Get_distance_hospital());
	printf("  ���������� �� �������� ����: %d ��\n", location.Get_distance_kindergarten());
	printf("  ���-�� ������: %d\n",flat.Get_count_room());
	printf("  ����: %d ������\n", flat.Get_coin());
	printf("  ���������� � �����: %s\n", street.Get_street_description());
}
