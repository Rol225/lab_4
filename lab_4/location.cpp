#define _CRT_SECURE_NO_WARNINGS
#include "location.h"
#include <iostream>

void location::Location�ompletion(int distanceSchool_2, int distanceHospital_2, int distanceKindergarten_2, char houseStreet_2[30], int numHouse_2)
{
	memset(&houseStreet, 0, sizeof(houseStreet));

	distanceSchool = distanceSchool_2;
	distanceHospital = distanceHospital_2;
	distanceKindergarten = distanceKindergarten_2;
	numHouse = numHouse_2;
	strcat(houseStreet, houseStreet_2);
}

void location::Location�ompletion_console()
{
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

	printf("����� ����: ");
	while (scanf("%d", &numHouse) != 1) {
		while (getchar() != '\n');
		printf("������. ������� �����: ");
	}

	printf("\n�����: "); scanf("%s", &houseStreet); while (getchar() != '\n');
}

void location::LocationViwe()
{
	printf("\n  ���������� �� �����: %d\n", distanceSchool);
	printf("  ���������� �� ��������: %d\n", distanceHospital);
	printf("  ���������� �� ������������: %d\n", distanceKindergarten);
	printf("  �������� �����: %s\n", houseStreet);
	printf("  ����� ����: %d\n", numHouse);
}

int location::Out_distanceSchool()
{
	return distanceSchool;
}

int location::Out_distanceHospital()
{
	return distanceHospital;
}

int location::Out_distanceKindergarten()
{
	return distanceKindergarten;
}

int location::Out_numHouse()
{
	return numHouse;
}

char* location::Out_houseStreet()
{
	return houseStreet;
}
