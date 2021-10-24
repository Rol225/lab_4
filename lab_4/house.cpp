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

	printf("Выберите стоимость квартиры: ");
	while (scanf("%d", &coin) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Выберите кол-во комнат: ");
	while (scanf("%d", &countRoom) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Номер дома: ");
	while (scanf("%d", &numHouse) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("Номер квартиры: ");
	while (scanf("%d", &numFlat) != 1) {
		while (getchar() != '\n');
		printf("Ошибка. Введите число: ");
	}

	printf("\nУлица: "); scanf("%s", &houseStreet); while (getchar() != '\n');
	printf("Описание улици: "); gets_s(streetDescription, 150);

	location.Set(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse);
	flat.Set(coin, countRoom, numFlat);
	street.Set(houseStreet, streetDescription);

	
}

void house::Print()
{
	int test = 0;
	printf("\n  Адрес: %s, дом %d\n", location.Get_house_street(), location.Get_num_house());
	printf("  Номер квартиры: %d\n",flat.Get_num_flat());
	printf("  Расстояние до школы: %d км\n", location.Get_distance_school());
	printf("  Расстояние до больницы: %d км\n", location.Get_distance_hospital());
	printf("  Расстояние до детского сада: %d км\n", location.Get_distance_kindergarten());
	printf("  Кол-во комнат: %d\n",flat.Get_count_room());
	printf("  Цена: %d рублей\n", flat.Get_coin());
	printf("  Информация о улице: %s\n", street.Get_street_description());
}
