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
	static int countData; // Кол-во домов в базе
public:
	house(); // Конструктор
	house* array_houses(int size); // Массив домов
	void Set(street *street_new, flat *flat_new, location *location_new); // Функция ввода через встроенную функцию
	void Set_console(); // Функция ввода через внешнюю функцию
	void Print();  // Функция вывода
	static int CountData(); // Функия счётчик
};

