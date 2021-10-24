#pragma once
class street
{
private:
	char streetName[30];
	char streetDescription[150];
public:
	void Set(char streetName[], char streetDescription[]); // Функция ввода через встроенную функцию
	void Set_console(); // Функция ввода через внешнюю функцию
	void Print(); // Функция вывода
	/// Функции вывода каждой отдельной переменной
	char* Get_street_name();
	char* Get_street_description();
};

