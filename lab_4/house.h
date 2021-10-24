#pragma once
#include "flat.h"
#include "location.h"
#include "street.h"

class house
{
private:
	flat flat;// Квартира
	location location;//Расположение дома
	street street; //Описание улицы
public:
	void Set(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse, int coin, int countRoom, int numFlat, char streetDescription[150]); // Функция ввода через встроенную функцию
	void Set_console(); // Функция ввода через внешнюю функцию
	void Print();  // Функция вывода
};

