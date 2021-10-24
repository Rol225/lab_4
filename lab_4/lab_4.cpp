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
	char houseStreet[30];
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
			location_1->LocationСompletion_console();
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

			printf("Номер дома: ");
			while (scanf("%d", &numHouse) != 1) {
				while (getchar() != '\n');
				printf("Ошибка. Введите число: ");
			}

			printf("\nУлица: "); scanf("%s", &houseStreet); while (getchar() != '\n');

			location_1->LocationСompletion(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse);
		}
		else if (option == 3) {
			printf("\n");
			location_1->LocationViwe();
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
	char streetName[30] = { 0 };
	char streetDescription[150] = { 0 };

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
			street_1->StreetСompletion_console();
		}
		else if (option == 2) {
			memset(&streetName, 0, sizeof(streetName));
			memset(&streetDescription, 0, sizeof(streetDescription));

			printf("\nУлица: "); scanf("%s", &streetName); while (getchar() != '\n');
			printf("Описание улици: "); gets_s(streetDescription, 150);

			street_1->StreetСompletion(streetName, streetDescription);
		}
		else if (option == 3) {
			street_1->StreetView();
		}

	} while (option != 4);

	delete street_1;
}

void FunckForHouse()
{
	int distanceSchool, distanceHospital, distanceKindergarten, numHouse, coin, countRoom, numFlat;
	char streetDescription[150];
	char houseStreet[30];

	house* house_1 = new house;

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

			printf("Выберите расстояние до школы: ");
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
			printf("Описание улици: "); gets_s(streetDescription, 150);

			house_1->Set(distanceSchool, distanceHospital, distanceKindergarten, houseStreet, numHouse, coin, countRoom, numFlat, streetDescription);
		}
		else if (option == 3) {
			house_1->Print();
		}

	} while (option != 4);

	delete house_1;
}