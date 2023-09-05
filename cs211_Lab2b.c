
//**************************************************************
//
// File Name: cs211_Lab2b.c
//
// A Program to calculate the gross profit, net profit
//		and sales commission on an item
//
// Programmer: “Your Name Goes Here”
//
// Date Written: today’s date
//
// Date last revised: “place the date of last revision here”
//
//**************************************************************

#include <stdio.h>


int main()
{
  long total, stock, sales;
  double price, commission, cost, income, profit;
  char type;

  /* input values to be used */
  printf("\n\n Please enter the following items ");
  printf( "to calculate \n gross profit,\n net profit,");
  printf("\n and sales commission on a item. \n\n\n");
  printf(" Enter the type of item (1 char.): ");
  scanf( "%c",&type);
  printf("\n Enter the number of items sold: ");
  scanf("%ld", &sales);   /* items sold */


  printf("\n Enter the number of items on hand");
  printf(" at the beginning of the month: ");
  scanf("%ld", &stock);   /* items on hand */

  printf("\n Enter the current selling price: ");
  scanf("%lf", &price);  /* selling price */

  printf("\n Enter the cost of the item: ");
  scanf("%lf", &cost);    /* cost of item */

  /* calculate values */

  total  =  stock -  sales;
  income =  price * sales;
  profit =  (price -  cost) *  sales;
  commission =  profit *  0.03;

  /* print answers */
  printf("\n\n\n\n End of month total inventory =  %ld of type %c\n",
         total, type);
  printf("\n On a gross income of  ");
  printf("%6.2f profit = %6.2f\n",income, profit);
  printf("\n Commissions at a rate of 0.03 = %6.2f\n", commission);
  printf("\n\n");

  return 0;
}

