#define _CRT_SECURE_NO_WARNINGS
#include "location.h"
#include <iostream>

void location::LocationСompletion(int distanceSchool_2, int distanceHospital_2, int distanceKindergarten_2, char houseStreet_2[30], int numHouse_2)
{
	memset(&houseStreet, 0, sizeof(houseStreet));

	distanceSchool = distanceSchool_2;
	distanceHospital = distanceHospital_2;
	distanceKindergarten = distanceKindergarten_2;
	numHouse = numHouse_2;
	strcat(houseStreet, houseStreet_2);
}

void location::LocationСompletion_console()
{
	memset(&houseStreet, 0, sizeof(houseStreet));

	printf("\nВыберите расстояние до школы: ");
	while (scanf("%d", &distanceSchool) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Выберите расстояние до больницы: ");
	while (scanf("%d", &distanceHospital) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Выберите расстояние до детского сада: ");
	while (scanf("%d", &distanceKindergarten) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Номер дома: ");
	while (scanf("%d", &numHouse) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("\nУлица: "); scanf("%s", &houseStreet); while (getchar() != '\n');
}

void location::LocationViwe()
{
	printf("\n  Расстояние до школы: %d\n", distanceSchool);
	printf("  Расстояние до больницы: %d\n", distanceHospital);
	printf("  Расстояние до детскогосада: %d\n", distanceKindergarten);
	printf("  Название улицы: %s\n", houseStreet);
	printf("  Номер дома: %d\n", numHouse);
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
