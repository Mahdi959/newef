
//******************************************************************
//
// File name: cs211_Labe2c.c
//
// A program to calculate the cost, tax and total cost of
//	purchasing several items with a 6.125% sales tax
//
// Programmer: 
//
// Date written: 
//
// Date last revised: 
//
//*****************************************************************

#include <stdio.h>

#define TAXRATE 0.06125
#define READ_LONG(longvar) scanf( "%ld", &longvar)
#define READ_DOUBLE(doubleVar) scanf("%lf", &doubleVar)

main()
  {

	long number;
	double price, cost, tax;

	printf("\nEnter number of units: ");
	READ_LONG(number);

	printf("Enter price per unit: ");
	READ_DOUBLE(price);

	printf("\nCost = %8.2f\n", cost = price * number);
	printf("Tax = %8.2f\n", tax = cost * TAXRATE);
	printf("Total = %8.2f\n", cost + tax);
	printf("\n");

  }
	
