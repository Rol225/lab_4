#define _CRT_SECURE_NO_WARNINGS
#include "street.h"
#include <iostream>

void street::Street�ompletion(char streetName_2[], char streetDescription_2[])
{
	memset(&streetName, 0, sizeof(streetName));
	memset(&streetDescription, 0, sizeof(streetDescription));

	strcat(streetName, streetName_2);
	strcat(streetDescription, streetDescription_2);
}

void street::Street�ompletion_console()
{
	memset(&streetName, 0, sizeof(streetName));
	memset(&streetDescription, 0, sizeof(streetDescription));

	printf("\n�����: "); scanf("%s", &streetName); while (getchar() != '\n');
	printf("�������� �����: "); gets_s(streetDescription, 150);
}

void street::StreetView()
{
	printf("\n  �����: %s\n", streetName);
	printf("  �������� �����: %s\n", streetDescription);
}

char* street::Out_streetName()
{
	return streetName;
}

char* street::Out_streetDescription()
{
	return streetDescription;
}