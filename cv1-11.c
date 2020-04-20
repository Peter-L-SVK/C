#include <stdio.h>

#define VNUTRI 1
#define VON 0

int main(void)
{
  int z, pr, ps, pz, stav;

  stav = VON;
  pr = ps = pz = 0;
  while ((z = getchar()) != EOF) {
    ++pz;

    if (z == '\n')
      ++pr;

    if (z == ' ' || z == '\n' || z == '\t')
      stav = VON;

    else if (stav == VON) {
      stav = VNUTRI;
      ++ps;
    }
  }
  printf("%d riadkov, %d slov,  %d znakov\n", pr, ps, pz);
  return 0;
}
