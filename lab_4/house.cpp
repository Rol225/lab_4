#define _CRT_SECURE_NO_WARNINGS
#include "house.h"
#include <iostream>

void house::Set(street *street_new, flat *flat_new, location *location_new)
{
	this->Location = *location_new;
	this->Flat = *flat_new;
	this->Street = *street_new;
}

void house::Set_console()
{
	int distanceSchool, distanceHospital, distanceKindergarten, numHouse, coin, countRoom, numFlat;
	std::string streetDescription;
	std::string houseStreet;

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

	printf("\nУлица: "); std::cin >> houseStreet;
	printf("Описание улици: "); std::cin >> streetDescription;

	Location.Set(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse);
	Flat.Set(coin, countRoom, numFlat);
	Street.Set(houseStreet, streetDescription);

	
}

int* Int_value_location(location& location)
{
	int mas[] = { location.distanceSchool, location.distanceHospital, location.distanceSchool, location.numHouse };
	return mas;
}

void house::Print()
{
	int test = 0;
	int* mas = Int_value_location(Location);
	std::cout << "\n  Адрес: " << Location.Get_house_street() << ", дом " << mas[3] << std::endl;
	printf("  Номер квартиры: %d\n",Flat.Get_num_flat());
	std::cout << "  Расстояние до школы: " << mas[2] << " км" << std::endl;
	std::cout << "  Расстояние до больницы: " << mas[1] << " км" << std::endl;
	std::cout << "  Расстояние до детского сада: " << mas[0] << " км" << std::endl;
	printf("  Кол-во комнат: %d\n",Flat.Get_count_room());
	printf("  Цена: %d рублей\n", Flat.Get_coin());
	std::cout << "  Информация о улице: " << Street.Get_street_description() << std::endl;
}
