#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100



int main()
{
    /* Deklaracja potrzebnych zmiennych:
    - int amountOfNumbers (liczba elementĂłw w tablicy)
    - int numbers[MAX_SIZE] (elementy w tablicy czyli liczby)
    - int average (srednia arytmetyczna elementow tablicy)
    - int largestInArray (liczba, ktora jest najwieksza w tablicy)*/
    int amountOfNumbers;
    int numbers[MAX_SIZE];
    float average;
    int largestInArray;


    // Wpisanie liczby elementow, ktore beda w tablicy
    printf("Ile liczb chcesz posiadac w swojej tablicy? : ");
    scanf("%d", &amountOfNumbers);

    // Wpisywanie tyle liczb, ile uzytkownik podal wczesniej 
    printf("Podaj %d liczb(y), ktore chcesz uwzglednic w tablicy:\n", amountOfNumbers);
    for(int i = 0; i < amountOfNumbers; i++) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Wyswietlenie tablicy z liczbami wpisanymi przez uzytkownika
    printf("Oto twoje liczby w tablicy:\n");
    for(int i = 0; i < amountOfNumbers; i++) {
        printf("%d ", numbers[i]);
    }

    // Szukanie najwiekszego elementu w tablicy za pomoca petli for i if
    largestInArray = numbers[0];
    for(int i = 0; i < amountOfNumbers; i++) {
        if(numbers[i] > largestInArray) {
            largestInArray = numbers[i];
        }
    }
    

    // Wyswietlenie najwiekszej liczby w tablicy
    printf("\nOto twoja najwieksza liczba w tablicy: %d", largestInArray);

    return 0;
}
