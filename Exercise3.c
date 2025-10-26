#include <stdio.h>
#include <stdlib.h>

int sumaTablicy(int tablica[], int index, int n) {
    if (index >= n) {
        return 0;
    } else {
        return tablica[index] + sumaTablicy(tablica, index + 1, n);
    }
}

int main()
{
    int tablica[] = {8, 9, 1, 2, 5};
    int rozmiarTablicy = 5;
    int suma = sumaTablicy(tablica, 0, rozmiarTablicy);

    printf("Suma elementow w danej tablicy wynosi: %d", suma);

    return 0;
}

