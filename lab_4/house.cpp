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

	printf("\n�����: "); std::cin >> houseStreet;
	printf("�������� �����: "); std::cin >> streetDescription;

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
	std::cout << "\n  �����: " << Location.Get_house_street() << ", ��� " << mas[3] << std::endl;
	printf("  ����� ��������: %d\n",Flat.Get_num_flat());
	std::cout << "  ���������� �� �����: " << mas[2] << " ��" << std::endl;
	std::cout << "  ���������� �� ��������: " << mas[1] << " ��" << std::endl;
	std::cout << "  ���������� �� �������� ����: " << mas[0] << " ��" << std::endl;
	printf("  ���-�� ������: %d\n",Flat.Get_count_room());
	printf("  ����: %d ������\n", Flat.Get_coin());
	std::cout << "  ���������� � �����: " << Street.Get_street_description() << std::endl;
}
