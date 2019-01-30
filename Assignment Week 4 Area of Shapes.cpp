// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "pch.h"
#include <cmath>
#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif
#include <stdio.h>
#define Triangle 1
#define Square 2
#define Rectangle 3

void main()
{
	int choice;
	int width, height, circumference, base, radius, radians;
	int area;
	printf("Area Calculator \n");
	printf("Enter Choice: \n");
	printf("1 <Triangle> \n");
	printf("2 <Square> \n");
	printf("3 <Rectangle> \n");
	printf("4 <Parallelogram> \n");
	printf("5 <Trapezoid> \n");
	printf("6 <Circle> \n");
	printf("7 <Ellipse> \n");
	printf("8 <Sector> \n");
	printf("Choice: ");
	scanf_s("%d", &choice);
	switch (choice)
	{
	case 1:
		printf("Enter base width: ");
		scanf_s("%d", &base);
		printf("Enter vertical height: ");
		scanf_s("%d", &height);

		area = 1.5*base*height;
		printf("area:%d \n", area);
		break;
	case 2:
		printf("Enter the length: ");
		scanf_s("%d", &width);

		area = width * width;
		printf("area:%d. \n", area);
		break;
	case 3:
		printf("Enter the length: ");
		scanf_s("%d", &width);
		printf("Enter the height: ");
		scanf_s("%d", &height);

		area = width * height;
		printf("area:%d \n", area);
		break;
	case 4:
		printf("Enter the base: ");
		scanf_s("%d", &base);
		printf("Enter the height: ");
		scanf_s("%d", &height);

		area = base*height;
		printf("area:%d \n", area);
		break;
	case 5:
		printf("Enter the length of side a: ");
		scanf_s("%d", &width);
		printf("Enter the length of side b: ");
		scanf_s("%d", &base);
		printf("Enter the height: ");
		scanf_s("%d", &height);

		area = (.5)*(width + base)*(height);
		printf("area:%d \n", area);
		break;
	case 6:
		printf("Enter the radius: ");
		scanf_s("%d", &radius);

		area = M_PI * radius*radius;
		printf("area:%d \n", area);
		break;
	case 7:
		printf("Enter the length of radius a: ");
		scanf_s("%d", &radius);
		printf("Enter the length of radius b: ");
		scanf_s("%d", &width);

		area = M_PI * radius*width;
			printf("area:%d \n", area);
			break;
	case 8:
			printf("Enter the radius: ");
			scanf_s("%d", &radius);
			printf("Enter the angle in radians: ");
				scanf_s("%d", &radians);
				area = .5*radius*radius*radians;
					printf("area:%d \n", area);
					break;
	}
}