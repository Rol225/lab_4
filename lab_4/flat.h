#pragma once
#include <string>
class flat
{
private:
	int coin; //цена
	int countRoom; //кол-во комнат
	int numFlat; //Номер квартиры
public:
	void Set(int coin_2, int countRoom_2, int numFlat_2); // Функция ввода через внешнюю функцию
	void Set_console();  // Функция ввода через встроенную функцию
	void Print(); // Функция вывода
	/// Функции вывода каждой отдельной переменной
	int Get_coin();
	int Get_count_room();
	int Get_num_flat();
};