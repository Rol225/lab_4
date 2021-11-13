#define _CRT_SECURE_NO_WARNINGS
#include "lab_4.h"
#include "house.h"

int main()
{
	//Подключение Русского языка
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int option = 0;

	do {
		printf("  1) Структура location\n  2) Структура flat\n  3) Структура street\n  4) Структура house\n  5) Выход\n");
		printf("Выберите действие: ");
		do {
			while (scanf("%d", &option) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}
			if (option > 5) {
				printf("\nОшибка. выбирете из допустимых значений: ");
			}
		} while (option > 5 || option <= 0);

		if (option == 1) {
			FunckForLocation();
		}
		else if (option == 2) {
			FunckForFlat();
		}
		else if (option == 3) {
			FunckForStreet();
		}
		else if (option == 4) {
			FunckForHouse();
		}
	} while (option != 5);
}

void FunckForLocation() {

	int distanceSchool, distanceHospital, distanceKindergarten, numHouse;
	std::string houseStreet;
	int option = 0;

	location* location_1 = new location;

	do {
		printf("\n\n  1) Заполнить через встроенную функцию\n  2) Заполнить через внешнюю функцию\n  3) Вывести информацию со структуры\n  4) Выход в главное меню\n");
		printf("Выберите действие: ");
		do {
			while (scanf("%d", &option) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}
			if (option > 4) {
				printf("\nОшибка. выбирете из допустимых значений: ");
			}
		} while (option > 4 || option <= 0);

		if (option == 1) {
			location_1->Set_console();
		}
		else if (option == 2) {
			printf("\nВыберите расстояние до школы: ");
			do {
				while (scanf("%d", &distanceSchool) != 1) {
					while (getchar() != '\n');
					printf("Ошибка. Введите число: ");
				}
			} while (distanceSchool <= 0);

			printf("Выберите расстояние до больницы: ");
			do {
				while (scanf("%d", &distanceHospital) != 1) {
					while (getchar() != '\n');
					printf("Ошибка. Введите число: ");
				}
			} while (distanceHospital <= 0);


			printf("Выберите расстояние до детского сада: ");
			do {
				while (scanf("%d", &distanceKindergarten) != 1) {
					while (getchar() != '\n');
					printf("Ошибка. Введите число: ");
				}
			} while (distanceKindergarten <= 0);

			printf("Номер дома: ");
			do {
				while (scanf("%d", &numHouse) != 1) {
					while (getchar() != '\n');
					printf("Ошибка. Введите число: ");
				}
			} while (numHouse <= 0);

			printf("\nУлица: "); scanf("%s", &houseStreet); while (getchar() != '\n');

			location_1->Set(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse);
		}
		else if (option == 3) {
			printf("\n");
			location_1->Print();
		}
	} while (option != 4);

	delete location_1;
}

void FunckForFlat() {
	int coin, countRoom, numFlat;
	int option = 0;

	flat* flat_1 = new flat;

	do {
		printf("\n\n  1) Заполнить через встроенную функцию\n  2) Заполнить через внешнюю функцию\n  3) Вывести информацию со структуры\n  4) Выход в главное меню\n");
		printf("Выберите действие: ");
		do {
			while (scanf("%d", &option) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}
			if (option > 4) {
				printf("\nОшибка. выбирете из допустимых значений: ");
			}
		} while (option > 4 || option <= 0);

		if (option == 1) {
			flat_1->Set_console();
		}
		else if (option == 2) {
			printf("\nВыберите стоимость квартиры: ");
			while (scanf("%d", &coin) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Выберите кол-во комнат: ");
			while (scanf("%d", &countRoom) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Номер квартиры: ");
			while (scanf("%d", &numFlat) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			flat_1->Set(coin, countRoom, numFlat);
		}
		else if (option == 3) {
			flat_1->Print();
		}

	} while (option != 4);

	delete flat_1;
}

void FunckForStreet() {
	std::string streetName;
	std::string streetDescription;

	street* street_1 = new street;

	int option = 0;
	do {
		printf("\n\n  1) Заполнить через встроенную функцию\n  2) Заполнить через внешнюю функцию\n  3) Вывести информацию со структуры\n  4) Выход в главное меню\n");
		printf("Выберите действие: ");
		do {
			while (scanf("%d", &option) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}
			if (option > 4) {
				printf("\nОшибка. выбирете из допустимых значений: ");
			}
		} while (option > 4 || option <= 0);

		if (option == 1) {
			street_1->Set_console();
		}
		else if (option == 2) {
			memset(&streetName, 0, sizeof(streetName));
			memset(&streetDescription, 0, sizeof(streetDescription));

			printf("\nУлица: "); scanf("%s", &streetName); while (getchar() != '\n');
			printf("Описание улици: "); scanf("%s", &streetDescription); while (getchar() != '\n');

			street_1->Set(streetName, streetDescription);
		}
		else if (option == 3) {
			street_1->Print();
		}

	} while (option != 4);

	delete street_1;
}

void FunckForHouse()
{
	int distanceSchool, distanceHospital, distanceKindergarten, numHouse, coin, countRoom, numFlat;
	std::string streetDescription;
	std::string houseStreet;

	house* house_1 = new house;
	street* street_new = new street;
	flat* flat_new = new flat;
	location* location_new = new location;

	int option = 0;
	do {
		printf("\n\n  1) Заполнить через встроенную функцию\n  2) Заполнить через внешнюю функцию\n  3) Вывести информацию со структуры\n  4) Выход в главное меню\n");
		printf("Выберите действие: ");
		do {
			while (scanf("%d", &option) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}
			if (option > 4) {
				printf("\nОшибка. выбирете из допустимых значений: ");
			}
		} while (option > 4 || option <= 0);

		if (option == 1) {
			house_1->Set_console();
		}
		else if (option == 2) {
			printf("\nВыберите расстояние до школы: ");
			while (scanf("%d", &distanceSchool) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Выберите расстояние до больницы: ");
			while (scanf("%d", &distanceHospital) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Выберите расстояние до детского сада: ");
			while (scanf("%d", &distanceKindergarten) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Выберите стоимость квартиры: ");
			while (scanf("%d", &coin) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Выберите кол-во комнат: ");
			while (scanf("%d", &countRoom) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Номер дома: ");
			while (scanf("%d", &numHouse) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("Номер квартиры: ");
			while (scanf("%d", &numFlat) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("\nУлица: "); scanf("%s", &houseStreet); while (getchar() != '\n');
			printf("Описание улици: "); scanf("%s", &streetDescription); while (getchar() != '\n');

			location_new->Set(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse);
			flat_new->Set(coin, countRoom, numFlat);
			street_new->Set(houseStreet, streetDescription);

			house_1->Set(street_new, flat_new, location_new);
		}
		else if (option == 3) {
			house_1->Print();
		}

	} while (option != 4);

	delete house_1;
	delete location_new;
	delete flat_new;
	delete street_new;
}