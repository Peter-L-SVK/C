#include <stdio.h>
#include <math.h>
#define N 1000000 

int main()
{ 
  FILE *fw;
  int i, j, a[N];
  
  fw = fopen("prvocisla.txt", "w");
  
  /* vsetky prvky pola oznacim 1 */
  for (i = 2; i < N; i++)
    a[i] = 1;
  
  /* tie ktore niesu prvocisla oznacim ako 0 */
  for (i = 2; i < (int)sqrt(N); i++)
    for (j = i; i*j < N; j++)
      a[i*j] = 0; 
  
  /* podmienkou if (a[i]) testujem ci sa dane cislo nachadza medzi prvocislami */      
  for (i = 2; i < N; i++)
    if (a[i])
      fprintf(fw,"%4d\n", i);
  
  fclose(fw);
  return 0; 
}
