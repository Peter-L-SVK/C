#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
#include "cv7-8.h"

int main(void)
{
  double hours;
  double gross;
  double net;
  double taxes;
  double pay;
  char choice;
 
  menu();
  while ((choice = getfirst()) != 'q')
    {
      if (choice == '\n')
	   continue;
	   choice = tolower(choice);
	   switch (choice)
	   {
	   case 'a':
	     pay = BASEPAY1; break;

	   case 'b':
	     pay = BASEPAY2; break;

	   case 'c':
	     pay = BASEPAY3; break;

	   case 'd':
	     pay = BASEPAY4; break;

	   default :
	     printf("Please enter a, b, c, d, or q.\n");
	     menu();
	     continue;
	   }

	   printf("Enter the number of hours worked this week: ");
	   scanf("%lf", &hours);

	   if (hours <= BASEHRS)
	     gross = hours * pay;

	   else
	     gross = BASEHRS * pay + (hours - BASEHRS) * pay * OVERTIME;

	   if (gross <= AMT1)
	     taxes = gross * RATE1;

	   else if (gross <= AMT1 + AMT2)
	     taxes = AMT1 * RATE1 + (gross - AMT1) * RATE2;

	   else
	     taxes = AMT1 * RATE1 + AMT2 * RATE2 + (gross - AMT1 - AMT2) * RATE3;

	   net = gross - taxes;
	   printf("gross: $%.2f; taxes: $%.2f; net: $%.2f\n", gross, taxes, net);
	   menu();
    }
  printf("Done.\n");
  return 0;
}

void menu(void)
{
  printf("\n");
  printf("****************************************************************\n");
  printf("Enter the number corresponding to the desired pay rate or action\n");
  printf("a) $ %g /hr \t\t b) $ %g /hr\n", BASEPAY1, BASEPAY2);
  printf("c) $ %g /hr \t\t d) $ %g /hr\n", BASEPAY3, BASEPAY4);
  printf("q) to qouit\n");
  printf("****************************************************************\n");
  printf("\n");
  printf("Your choice: \n");
}

int getfirst(void)
{
  int ch;
  ch = getchar();
  while (isspace(ch))
    ch = getchar();
  while (getchar() != '\n')
    continue;
  return ch;
}
