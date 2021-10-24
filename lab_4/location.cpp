#define _CRT_SECURE_NO_WARNINGS
#include "location.h"
#include <iostream>

void location::Set(int distanceSchool_2, int distanceHospital_2, int distanceKindergarten_2, char houseStreet_2[30], int numHouse_2)
{
	memset(&houseStreet, 0, sizeof(houseStreet));

	if (distanceSchool_2 <= 0) {
		distanceSchool = 0;
	}
	else {
		distanceSchool = distanceSchool_2;
	}
	if (distanceHospital_2 <= 0) {
		distanceHospital = 0;
	}
	else {
		distanceHospital = distanceHospital_2;
	}
	if (distanceKindergarten_2 <= 0) {
		distanceKindergarten = 0;
	}
	else {
		distanceKindergarten = distanceKindergarten_2;
	}
	if (numHouse_2 <= 0) {
		numHouse = 0;
	}
	else {
		numHouse = numHouse_2;
	}
	if (houseStreet_2 != nullptr) {
		strcat(houseStreet, houseStreet_2);
	}
	else {
		strcat(houseStreet, "Error");
	}
	
}

void location::Set_console()
{
	memset(&houseStreet, 0, sizeof(houseStreet));

	printf("\nВыберите расстояние до школы: ");
	do {
		while (scanf("%d", &distanceSchool) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите число: ");
		}
	} while (distanceSchool <= 0);
	
	printf("Выберите расстояние до больницы: ");
	do {
		while (scanf("%d", &distanceHospital) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите число: ");
		}
	}while(distanceHospital <= 0);
	
	
	printf("Выберите расстояние до детского сада: ");
	do {
		while (scanf("%d", &distanceKindergarten) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите число: ");
		}
	} while (distanceKindergarten <= 0);
	
	printf("Номер дома: ");
	do {
		while (scanf("%d", &numHouse) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите число: ");
		}
	} while (numHouse <= 0);
	
	printf("\nУлица: "); scanf("%s", &houseStreet); while (getchar() != '\n');
}

void location::Print()
{
	printf("\n  Расстояние до школы: %d\n", distanceSchool);
	printf("  Расстояние до больницы: %d\n", distanceHospital);
	printf("  Расстояние до детскогосада: %d\n", distanceKindergarten);
	printf("  Название улицы: %s\n", houseStreet);
	printf("  Номер дома: %d\n", numHouse);
}

int location::Get_distance_school()
{
	return distanceSchool;
}

int location::Get_distance_hospital()
{
	return distanceHospital;
}

int location::Get_distance_kindergarten()
{
	return distanceKindergarten;
}

int location::Get_num_house()
{
	return numHouse;
}

char* location::Get_house_street()
{
	return houseStreet;
}
