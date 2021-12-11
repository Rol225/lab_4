#define _CRT_SECURE_NO_WARNINGS
#include "street.h"
#include "string"

street::street()
{
	memset(&streetName, 0, sizeof(streetName));
	memset(&streetDescription, 0, sizeof(streetDescription));
	this->streetName = "";
	this->streetDescription = "";
}

street::street(std::string streetName_2)
{
	memset(&streetName, 0, sizeof(streetName));
	memset(&streetDescription, 0, sizeof(streetDescription));
	this->streetDescription = "";
	if (streetName_2[0] != '\0') {
		this->streetName = streetName_2;
	}
	else {
		this->streetName = "Error";
	}
}

street::street(std::string streetName_new, std::string streetDescription_new)
{
	memset(&streetName, 0, sizeof(streetName));
	memset(&streetDescription, 0, sizeof(streetDescription));

	if (streetName_new[0] != '\0') {
		this->streetName = streetName_new;
	}
	else {
		this->streetName = "Error";
	}
	if (streetName_new[0] != '\0') {
		this->streetDescription = streetDescription_new;
	}
	else {
		this->streetDescription = "Error";
	}
}

void street::Set(std::string streetName_2, std::string streetDescription_2)
{
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
	std::cin.ignore();
	printf("\nУлица: ");
	getline(std::cin, streetName, '\n');
	printf("Описание улици: ");
	getline(std::cin, streetDescription, '\n');
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