#define _CRT_SECURE_NO_WARNINGS
#include "location.h"
#include <iostream>
#include <string>

location::location()
{
	this->distanceHospital = 0;
	this->distanceKindergarten = 0;
	this->distanceSchool = 0;
	this->houseStreet = "";
	this->numHouse = 0;
}

location::location(int numHouse_new)
{
	this->distanceHospital = 0;
	this->distanceKindergarten = 0;
	this->distanceSchool = 0;
	this->houseStreet = "";
	try
	{
		if (numHouse_new <= 0) {
			this->numHouse = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->numHouse = numHouse_new;
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
}

location::location(int distanceSchool_new, int distanceHospital_new, int distanceKindergarten_new, std::string houseStreet_new, int numHouse_new)
{
	memset(&houseStreet, 0, sizeof(houseStreet));
	try
	{
		if (distanceSchool_new <= 0) {
			this->distanceSchool = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->distanceSchool = distanceSchool_new;
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	try
	{
		if (distanceHospital_new <= 0) {
			this->distanceHospital = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->distanceHospital = distanceHospital_new;
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	try
	{
		if (distanceKindergarten_new <= 0) {
			this->distanceKindergarten = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->distanceKindergarten = distanceKindergarten_new;
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	try
	{
		if (numHouse_new <= 0) {
			this->numHouse = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->numHouse = numHouse_new;
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	try
	{
		if (houseStreet_new[0] != '\0') {
			this->houseStreet = houseStreet_new;
		}
		else {
			this->houseStreet = "Error";
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
}

void location::Set(int distanceSchool_2, int distanceHospital_2, int distanceKindergarten_2, std::string houseStreet_2, int numHouse_2)
{
	memset(&houseStreet, 0, sizeof(houseStreet));

	try
	{
		if (distanceSchool_2 <= 0) {
			this->distanceSchool = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->distanceSchool = distanceSchool_2;
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	try
	{
		if (distanceHospital_2 <= 0) {
			this->distanceHospital = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->distanceHospital = distanceHospital_2;
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	try
	{
		if (distanceKindergarten_2 <= 0) {
			this->distanceKindergarten = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->distanceKindergarten = distanceKindergarten_2;
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	try
	{
		if (numHouse_2 <= 0) {
			this->numHouse = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->numHouse = numHouse_2;
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	try
	{
		if (houseStreet_2[0] != '\0') {
			this->houseStreet = houseStreet_2;
		}
		else {
			this->houseStreet = "Error";
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
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
	
	printf("\nУлица: "); std::cin >> houseStreet;
}

void location::Print()
{
	printf("\n  Расстояние до школы: %d\n", distanceSchool);
	printf("  Расстояние до больницы: %d\n", distanceHospital);
	printf("  Расстояние до детскогосада: %d\n", distanceKindergarten);
	printf("  Название улицы: "); std::cin >> houseStreet;
	printf("  Номер дома: %d\n", numHouse);
}

std::string location::Get_house_street()
{
	return houseStreet;
}

