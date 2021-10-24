#pragma once
class street
{
private:
	char streetName[30];
	char streetDescription[150];
public:
	void StreetСompletion(char streetName[], char streetDescription[]); // Функция ввода через встроенную функцию
	void StreetСompletion_console(); // Функция ввода через внешнюю функцию
	void StreetView(); // Функция вывода
	/// Функции вывода каждой отдельной переменной
	char* Out_streetName();
	char* Out_streetDescription();
};

