#define _CRT_SECURE_NO_WARNINGS
#include "house.h"
#include <iostream>

void house::Set(street *street_new, flat *flat_new, location *location_new)
{
	Location = *location_new;
	Flat = *flat_new;
	Street = *street_new;
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

	Location.Set(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse);
	Flat.Set(coin, countRoom, numFlat);
	Street.Set(houseStreet, streetDescription);

	
}

void house::Print()
{
	int test = 0;
	printf("\n  �����: %s, ��� %d\n", Location.Get_house_street(), Location.Get_num_house());
	printf("  ����� ��������: %d\n",Flat.Get_num_flat());
	printf("  ���������� �� �����: %d ��\n", Location.Get_distance_school());
	printf("  ���������� �� ��������: %d ��\n", Location.Get_distance_hospital());
	printf("  ���������� �� �������� ����: %d ��\n", Location.Get_distance_kindergarten());
	printf("  ���-�� ������: %d\n",Flat.Get_count_room());
	printf("  ����: %d ������\n", Flat.Get_coin());
	printf("  ���������� � �����: %s\n", Street.Get_street_description());
}
