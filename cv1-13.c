#include <stdio.h>
#define VON 0
#define DNU 1
int main()
{
  int i, z, dslova, stav;
  int vyskyt[5];

  for(i = 0; i < 5; ++i)
    vyskyt[i] = 0;

  dslova = 0;
  printf("Zadajte text\n");
  while ((z=getchar()) != EOF){
    
    if ((z >= 'A' && z<= 'B') || (z >= 'a' && z<= 'z'))
      ++dslova;
    
    else if (z == ' ' || z == '\t' || z == '\n')
      {
	stav = VON;
	
	if (dslova == 1)
	  ++vyskyt[0];

	else if (dslova == 2)
	  ++vyskyt[1];

	else if (dslova == 3)
	  ++vyskyt[2];

	else if (dslova ==4)
	  ++vyskyt[3];

	else if (dslova >=5)
	  ++vyskyt[4];

	if (stav == VON)
	  {
	    stav = DNU;
	    dslova = 0;
	  }
    }
  }

  printf("Pocet slov \n");

  for (i=0; i<5; ++i)
    i >= 4 ? printf("%d s poctom pismen = %d a viac\n", vyskyt[i], i+1) :
      printf("%d s poctom pismen = %d\n", vyskyt[i], i+1);

  return 0;
}
