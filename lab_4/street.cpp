#define _CRT_SECURE_NO_WARNINGS
#include "street.h"
#include <iostream>

void street::Set(std::string streetName_2, std::string streetDescription_2)
{
	memset(&streetName, 0, sizeof(streetName));
	memset(&streetDescription, 0, sizeof(streetDescription));

	if (streetName_2[0] != '\0') {
		this->streetName = streetName_2;
	}
	else {
		this->streetName = "Error";
	}
	if (streetName_2[0] != '\0') {
		this->streetDescription = streetDescription_2;
	}
	else {
		this->streetDescription = "Error";
	}
	
}

void street::Set_console()
{
	printf("\nУлица: "); std::cin >> streetName;
	printf("Описание улици: "); std::cin >> streetDescription;
}

void street::Print()
{
	std::cout << "\n  Улица:" << streetName << std::endl;
	std::cout << "  Описание улици: " << streetDescription;
}

std::string street::Get_street_name()
{
	return streetName;
}

std::string street::Get_street_description()
{
	return streetDescription;
}