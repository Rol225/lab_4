#define _CRT_SECURE_NO_WARNINGS
#include "house.h"
#include <iostream>

void house::House�ompletion(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, int coin, int countRoom, int numFlat, char streetDescription[150])
{
	location.Location�ompletion(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse);
	flat.Flat�ompletion(coin, countRoom, numFlat);
	street.Street�ompletion(houseStreet, streetDescription);
}

void house::House�ompletion_console()
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

	location.Location�ompletion(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse);
	flat.Flat�ompletion(coin, countRoom, numFlat);
	street.Street�ompletion(houseStreet, streetDescription);

	
}

void house::House_view()
{
	int test = 0;
	printf("\n  �����: %s, ��� %d\n", location.Out_houseStreet(), location.Out_numHouse());
	printf("  ����� ��������: %d\n",flat.Get_num_flat());
	printf("  ���������� �� �����: %d ��\n", location.Out_distanceSchool());
	printf("  ���������� �� ��������: %d ��\n", location.Out_distanceHospital());
	printf("  ���������� �� �������� ����: %d ��\n", location.Out_distanceKindergarten());
	printf("  ���-�� ������: %d\n",flat.Get_count_room());
	printf("  ����: %d ������\n", flat.Get_coin());
	printf("  ���������� � �����: %s\n", street.Out_streetDescription());
}
