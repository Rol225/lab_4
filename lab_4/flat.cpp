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
			throw std::exception("������ ������������ �������� ���������� �������!");
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
			throw std::exception("������ ������������ �������� ���������� �������!");
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
			throw std::exception("������ ������������ �������� ���������� �������!");
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
			throw std::exception("������ ������������ �������� ���������� �������!");
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
			throw std::exception("������ ������������ �������� ���������� �������!");
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
			throw std::exception("������ ������������ �������� ���������� �������!");
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
			throw std::exception("������ ������������ �������� ���������� �������!");
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
	printf("\n�������� ��������� ��������: ");
	do {
		while (scanf("%d", &coin) != 1) {
			while (getchar() != '\n');
			printf("������. ������� �����: ");
		}
	} while (coin <= 0);
	
	printf("�������� ���-�� ������: ");
	do {
		while (scanf("%d", &countRoom) != 1) {
			while (getchar() != '\n');
			printf("������. ������� �����: ");
		}
	} while (countRoom <= 0);
	
	
	printf("����� ��������: ");
	do {
		while (scanf("%d", &numFlat) != 1) {
			while (getchar() != '\n');
			printf("������. ������� �����: ");
		}
	} while (numFlat <= 0);
	
}

void flat::Print()
{
	printf("\n  ����: %d\n", coin);
	printf("  ���������� ������: %d\n", countRoom);
	printf("  ����� ��������: %d\n", numFlat);
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

