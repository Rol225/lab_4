#define _CRT_SECURE_NO_WARNINGS
#include "street.h"
#include <iostream>

void street::Set(char streetName_2[], char streetDescription_2[])
{
	memset(&streetName, 0, sizeof(streetName));
	memset(&streetDescription, 0, sizeof(streetDescription));

	if (streetName_2 != nullptr) {
		strcat(streetName, streetName_2);
	}
	else {
		strcat(streetName, "Error");
	}
	if (streetName_2 != nullptr) {
		strcat(streetDescription, streetDescription_2);
	}
	else {
		strcat(streetDescription, "Error");
	}
	
}

void street::Set_console()
{
	memset(&streetName, 0, sizeof(streetName));
	memset(&streetDescription, 0, sizeof(streetDescription));

	printf("\nУлица: "); scanf("%s", &streetName); while (getchar() != '\n');
	printf("Описание улици: "); gets_s(streetDescription, 150);
}

void street::Print()
{
	printf("\n  Улица: %s\n", streetName);
	printf("  Описание улицы: %s\n", streetDescription);
}

char* street::Get_street_name()
{
	return streetName;
}

char* street::Get_street_description()
{
	return streetDescription;
}