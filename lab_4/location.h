#pragma once
class location
{
private:
	int distanceSchool; //Расстояние до школы
	int distanceHospital;//Расстояние до больници
	int distanceKindergarten;//Расстояние до детского сада
	char houseStreet[30]; //адрес дома
	int numHouse;
public:
	void LocationСompletion(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse); //Функция ввода через внешнюю функцию
	void LocationСompletion_console(); //Функция ввода через встроенную функцию
	void LocationViwe(); //Вывод
	/// Вывод каждой отдельной переменной
	int Out_distanceSchool();
	int Out_distanceHospital();
	int Out_distanceKindergarten();
	int Out_numHouse();
	char* Out_houseStreet();
};

