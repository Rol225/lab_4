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
	void Set(int distanceSchool, int distanceHospital, int distanceKindergarten, char houseStreet[30], int numHouse); //Функция ввода через внешнюю функцию
	void Set_console(); //Функция ввода через встроенную функцию
	void Print(); //Вывод
	/// Вывод каждой отдельной переменной
	int Get_distance_school();
	int Get_distance_hospital();
	int Get_distance_kindergarten();
	int Get_num_house();
	char* Get_house_street();
};

