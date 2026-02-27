#include <stdio.h>

#define MAX_SIZE 5

int main() {
    int tablica[MAX_SIZE];
    int *poczatek, *koniec;

    printf("Podaj %d liczb ca³kowitych:\n", MAX_SIZE);
    for(int i = 0; i < MAX_SIZE; i++) {
        printf("tablica[%d] = ", i);
        scanf("%d", &tablica[i]);
    }

    poczatek = &tablica[0];
    koniec = &tablica[MAX_SIZE - 1];

    printf("\nObrocona tablica:\n");
    for(int i = 0; i < MAX_SIZE; i++) {
        printf("%d ", *(koniec - i));
    }

    printf("\n");
    return 0;
}
