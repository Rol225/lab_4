#define _CRT_SECURE_NO_WARNINGS
#include "location.h"
#include <iostream>

void location::Set(int distanceSchool_2, int distanceHospital_2, int distanceKindergarten_2, std::string houseStreet_2, int numHouse_2)
{
	memset(&houseStreet, 0, sizeof(houseStreet));

	if (distanceSchool_2 <= 0) {
		this->distanceSchool = 0;
	}
	else {
		this->distanceSchool = distanceSchool_2;
	}
	if (distanceHospital_2 <= 0) {
		this->distanceHospital = 0;
	}
	else {
		this->distanceHospital = distanceHospital_2;
	}
	if (distanceKindergarten_2 <= 0) {
		this->distanceKindergarten = 0;
	}
	else {
		this->distanceKindergarten = distanceKindergarten_2;
	}
	if (numHouse_2 <= 0) {
		this->numHouse = 0;
	}
	else {
		this->numHouse = numHouse_2;
	}
	if (houseStreet_2[0] != '\0') {
		this->houseStreet = houseStreet_2;
	}
	else {
		this->houseStreet = "Error";
	}
	
}

void location::Set_console()
{
	memset(&houseStreet, 0, sizeof(houseStreet));

	printf("\n�������� ���������� �� �����: ");
	do {
		while (scanf("%d", &distanceSchool) != 1) {
			while (getchar() != '\n');
			printf("������. ������� �����: ");
		}
	} while (distanceSchool <= 0);
	
	printf("�������� ���������� �� ��������: ");
	do {
		while (scanf("%d", &distanceHospital) != 1) {
			while (getchar() != '\n');
			printf("������. ������� �����: ");
		}
	}while(distanceHospital <= 0);
	
	
	printf("�������� ���������� �� �������� ����: ");
	do {
		while (scanf("%d", &distanceKindergarten) != 1) {
			while (getchar() != '\n');
			printf("������. ������� �����: ");
		}
	} while (distanceKindergarten <= 0);
	
	printf("����� ����: ");
	do {
		while (scanf("%d", &numHouse) != 1) {
			while (getchar() != '\n');
			printf("������. ������� �����: ");
		}
	} while (numHouse <= 0);
	
	printf("\n�����: "); std::cin >> houseStreet;
}

void location::Print()
{
	printf("\n  ���������� �� �����: %d\n", distanceSchool);
	printf("  ���������� �� ��������: %d\n", distanceHospital);
	printf("  ���������� �� ������������: %d\n", distanceKindergarten);
	printf("  �������� �����: "); std::cin >> houseStreet;
	printf("  ����� ����: %d\n", numHouse);
}

std::string location::Get_house_street()
{
	return houseStreet;
}

