#define _CRT_SECURE_NO_WARNINGS
#include "street.h"
#include <iostream>

void street::Set(std::string streetName_2, std::string streetDescription_2)
{
	memset(&streetName, 0, sizeof(streetName));
	memset(&streetDescription, 0, sizeof(streetDescription));

	if (streetName_2[0] != '\0') {
		streetName = streetName_2;
	}
	else {
		streetName = "Error";
	}
	if (streetName_2[0] != '\0') {
		streetDescription = streetDescription_2;
	}
	else {
		streetDescription = "Error";
	}
	
}

void street::Set_console()
{
	memset(&streetName, 0, sizeof(streetName));
	memset(&streetDescription, 0, sizeof(streetDescription));

	printf("\nУлица: "); scanf("%s", &streetName); while (getchar() != '\n');
	printf("Описание улици: "); scanf("%s", &streetDescription); while (getchar() != '\n');
}

void street::Print()
{
	printf("\n  Улица: %s\n", streetName);
	printf("  Описание улицы: %s\n", streetDescription);
}

std::string street::Get_street_name()
{
	return streetName;
}

std::string street::Get_street_description()
{
	return streetDescription;
}