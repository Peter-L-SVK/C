#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gues2.h"

int main()
{
  int gues_num;
  int answer;
  int pocet_pokusov;
  int pokusy[MOZNOSTI];
  int pozicia;

  pozicia = 0;
  pocet_pokusov = MOZNOSTI;
  srand(time(NULL));
  gues_num = rand() % 9;
  system("clear");
  printf("Hadaj cislo od 0 po 9 (pocet pokusov: %d): ", pocet_pokusov);
  while ((answer = getnum()) && pocet_pokusov > 0)
    {
      if (answer == 10)
	answer -= 10;
      if (answer == gues_num)
	{
	  printf("Gratulujem, uhadol si.\n");
	  printf("Teraz hadam ja.\n");
	  gues_num = rand() % 9;
	  pocet_pokusov = MOZNOSTI;
	  pozicia = 0;
	  pokusy[pozicia] = gues_num;
	  pozicia++;
	  printf("Je to cislo %d? (pocet pokusov: %d)[Y/N]: ", gues_num, pocet_pokusov); 
	  while ((answer = getfirst()) != EOF && pocet_pokusov > 0)
	    {
	      switch (answer)
		{
		case 'y':
		case 'Y':
		  printf("Jej uhadol som!\n");
		  break;
		  
		case 'n':
		case 'N':
		  gues_num = rand() % 9;
		  pokusy[pozicia] = gues_num;
		  if (pokusy[pozicia] == pokusy[pozicia - 1] || pokusy[pozicia] == pokusy[pozicia - 2])
		    while (gues_num == pokusy[pozicia - 1] || gues_num == pokusy[pozicia - 2])
		      gues_num = rand() % 9;
		  pokusy[pozicia] = gues_num;
		  pozicia++;
		  pocet_pokusov--;
		  if (pocet_pokusov == 0)
		    {
		      printf("Ok neuhadol som, mozno nabuduce.\n");
		      clspause();
		      exit(0);
		    }
		  printf("Ok, skusim znovu.\n");
		  printf("Je to cislo %d? (pocet pokusov: %d)[Y/N]: ", gues_num, pocet_pokusov);
		  continue;
		  
		default :
		  printf("Prosim odpovedaj len Y alebo N! : ");
		  continue;
		}
	      break;
	    }
	  break;
	}
      
      else if (answer == gues_num + 1 || answer == gues_num - 1)
	{
	  pokusy[pozicia] = answer;
	  if (answer == pokusy[pozicia - 1] || answer == pokusy[pozicia - 2])
	    printf("Toto cislo si uz skusal!\n");
	  pozicia++;
	  pocet_pokusov--;
	  if (pocet_pokusov == 0)
	    {
	      printf("Nevadi, skusis nabuduce.\n");
	      clspause();
	      exit(0);
	    }
	  printf("Tesne, skus znova.\n");
	  printf("Hadaj cislo od 0 po 9 (pocet pokusov: %d): ", pocet_pokusov);
	  continue;
	}
      
      else
	{
	  pokusy[pozicia] = answer;
	  if (answer == pokusy[pozicia - 1] || answer == pokusy[pozicia - 2])
	    printf("Toto cislo si uz skusal!\n");
	  pozicia++;
	  pocet_pokusov--;
	  if (pocet_pokusov == 0)
	    {
	      printf("Nevadi, skusis nabuduce.\n");
	      clspause();
	      exit(0);
	    }
	  printf("Zle, skus znova.\n");
	  printf("Hadaj cislo od 0 po 9 (pocet pokusov: %d): ", pocet_pokusov);
	  continue;
	}
    }
  
  printf("Koniec programu.\n");
  clspause();
  return 0;  
}
