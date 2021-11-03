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

	Location.Set(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse);
	Flat.Set(coin, countRoom, numFlat);
	Street.Set(houseStreet, streetDescription);

	
}

void house::Print()
{
	int test = 0;
	printf("\n  Адрес: %s, дом %d\n", Location.Get_house_street(), Location.Get_num_house());
	printf("  Номер квартиры: %d\n",Flat.Get_num_flat());
	printf("  Расстояние до школы: %d км\n", Location.Get_distance_school());
	printf("  Расстояние до больницы: %d км\n", Location.Get_distance_hospital());
	printf("  Расстояние до детского сада: %d км\n", Location.Get_distance_kindergarten());
	printf("  Кол-во комнат: %d\n",Flat.Get_count_room());
	printf("  Цена: %d рублей\n", Flat.Get_coin());
	printf("  Информация о улице: %s\n", Street.Get_street_description());
}
