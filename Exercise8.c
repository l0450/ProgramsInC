#include <stdio.h>
#include <stdlib.h>



int main()
{
  int macierz[3][3], wiersz, kolumna;
  long wyznacznik;


  printf("Wprowadz elementy Twojej macierzy 3x3:\n");
  for(wiersz = 0 ; wiersz < 3; wiersz++) {
      for(kolumna = 0; kolumna < 3; kolumna++) {
          printf("a%d%d = ", wiersz+1, kolumna+1);
          scanf("%d", &macierz[wiersz][kolumna]);
      }
  }


  printf("Twoja macierz:");
  for(wiersz = 0; wiersz < 3; wiersz++) {
        printf("\n");
        for(kolumna = 0; kolumna < 3; kolumna++) {
            printf("%d\t", macierz[wiersz][kolumna]);
        }
  }

   wyznacznik = macierz[0][0] * ((macierz[1][1]*macierz[2][2]) - (macierz[2][1]*macierz[1][2])) -macierz[0][1] * (macierz[1][0]
   * macierz[2][2] - macierz[2][0] *macierz[1][2]) + macierz[0][2] * (macierz[1][0] * macierz[2][1] - macierz[2][0] * macierz[1][1]);

   printf("\nWyznacznik twojej macierzy wynosi: %ld", wyznacznik);

   return 0;
}
