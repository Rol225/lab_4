#pragma once
#include <string>
#include <iostream>

class street
{
private:
	std::string streetName;
	std::string streetDescription;
public:
	street(); // Конструктор
	street(std::string streetName); // Конструктор с одним параметром
	street(std::string streetName, std::string streetDescription); // Конструктор
	void Set(std::string streetName, std::string streetDescription); // Функция ввода через встроенную функцию
	void Set_console(); // Функция ввода через внешнюю функцию
	void Print(); // Функция вывода
	/// Функции вывода каждой отдельной переменной
	std::string Get_street_name();
	std::string Get_street_description();
};

