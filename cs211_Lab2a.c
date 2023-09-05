
//**************************************************************
//
// File Name: cs211_Lab2a.c
//
// A Program to calculate the distance traveled given the
// speed (mph) and time (hr)
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
  int time,mph;

// INPUT SECTION
  printf("Enter your speed in miles per hour: ");
  scanf("%d",&mph);
  printf("Enter the number of hours: ");
  scanf("%d",&time);

// CALCULATION AND OUTPUT SECTION
  printf("Miles traveled = %d \n", mph * time);
  return 0;
}


