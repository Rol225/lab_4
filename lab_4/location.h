#pragma once
#include <string>
#include <iostream>
class location
{
private:
	int distanceSchool; //Расстояние до школы
	int distanceHospital;//Расстояние до больници
	int distanceKindergarten;//Расстояние до детского сада
	std::string houseStreet; //адрес дома
	int numHouse;
public:
	//Проверка целого не отрицательного числа
	friend int* Int_value_location(location& location); // Дружественная функция
	void Set(int distanceSchool, int distanceHospital, int distanceKindergarten, std::string houseStreet, int numHouse); //Функция ввода через внешнюю функцию
	void Set_console(); //Функция ввода через встроенную функцию
	void Print(); //Вывод
	/// Вывод каждой отдельной переменной
	std::string Get_house_street();
};

