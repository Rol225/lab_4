#define _CRT_SECURE_NO_WARNINGS
#include "flat.h"
#include <iostream>

flat::flat()
{
	this->coin = 0;
	this->countRoom = 0;
	this->numFlat = 0;
}

flat::flat(int numFlat_2)
{
	this->coin = 0;
	this->countRoom = 0;
	try
	{
		if (numFlat_2 <= 0) {
			this->numFlat = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->numFlat = numFlat_2;
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
}

flat::flat(int coin_2, int countRoom_2, int numFlat_2)
{
	try
	{
		if (coin_2 <= 0) {
			this->coin = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->coin = coin_2;
		}
	}
	catch (const std::exception &ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	try
	{
		if (countRoom_2 <= 0) {
			this->countRoom = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->countRoom = countRoom_2;
		}
	}
	catch (const std::exception &ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	try
	{
		if (numFlat_2 <= 0) {
			this->numFlat = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->numFlat = numFlat_2;
		}
	}
	catch (const std::exception &ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	
}

void flat::Set(int coin_2, int countRoom_2, int numFlat_2)
{
	try
	{
		if (coin_2 <= 0) {
			this->coin = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->coin = coin_2;
		}
	}
	catch (const std::exception &ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	try
	{
		if (countRoom_2 <= 0) {
			this->countRoom = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->countRoom = countRoom_2;
		}
	}
	catch (const std::exception &ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	try
	{
		if (numFlat_2 <= 0) {
			this->numFlat = 0;
			throw std::exception("Ошибка присваивания значения переменной обьекта!");
		}
		else {
			this->numFlat = numFlat_2;
		}
	}
	catch (const std::exception &ex)
	{
		std::cout << std::endl;
		std::cout << ex.what() << std::endl;
	}
	
}

void flat::Set_console()
{
	printf("\nВыберите стоимость квартиры: ");
	do {
		while (scanf("%d", &coin) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите число: ");
		}
	} while (coin <= 0);
	
	printf("Выберите кол-во комнат: ");
	do {
		while (scanf("%d", &countRoom) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите число: ");
		}
	} while (countRoom <= 0);
	
	
	printf("Номер квартиры: ");
	do {
		while (scanf("%d", &numFlat) != 1) {
			while (getchar() != '\n');
			printf("Ошибка. Введите число: ");
		}
	} while (numFlat <= 0);
	
}

void flat::Print()
{
	printf("\n  Цена: %d\n", coin);
	printf("  Количество комнат: %d\n", countRoom);
	printf("  Номер квартиры: %d\n", numFlat);
}

int flat::Get_coin()
{
	return coin;
}

int flat::Get_count_room()
{
	return countRoom;
}

int flat::Get_num_flat()
{
	return numFlat;
}

