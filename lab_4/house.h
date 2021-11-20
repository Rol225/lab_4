#pragma once
#include "flat.h"
#include "location.h"
#include "street.h"
#include <string>

class house
{
private:
	flat Flat;// Квартира
	location Location;//Расположение дома
	street Street; //Описание улицы
public:
	void Set(street *street_new, flat *flat_new, location *location_new); // Функция ввода через встроенную функцию
	void Set_console(); // Функция ввода через внешнюю функцию
	void Print();  // Функция вывода
};

