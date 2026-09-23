// 7a

/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159



int main()
{
    int wybor, bok1, bok2, promien;
    double wynik_pole, wynik_obwod;
    printf("1) Prostokat\n");
    printf("2) Kolo\n");
    printf("Wybierz figure geometryczna: ");
    scanf("%d", &wybor);

    switch(wybor) {
    case 1:
        do {
        printf("Podaj dlugosci bokow prostokata:\n");
        printf("1-wszy bok: ");
        scanf("%d", &bok1);
        printf("2-gi bok: ");
        scanf("%d", &bok2);
        if (bok1 < 0 || bok2 < 0) {
            printf("Wartosci bokow prostokata nie moga byc ujemne\n");
        }
        } while(bok1 < 0 || bok2 < 0);
        wynik_obwod = 2 * (bok1 + bok2);
        wynik_pole = bok1 * bok2;
        printf("Obwod podanego prostokata wynosi: %.1f\n", wynik_obwod);
        printf("Pole podanego prostokata wynosi: %.1f", wynik_pole);
        break;
    case 2:
        do {
        printf("Podaj promien kola:\n");
        scanf("%d", &promien);
        if (promien < 0) {
            printf("Wartosc promienia byc ujemna\n");
        }
        } while(promien < 0);
        wynik_obwod = 2 * PI * promien;
        wynik_pole = PI * (promien * promien);
        printf("Obwod podanego kola wynosi: %.1f\n", wynik_obwod);
        printf("Pole podanego kola wynosi: %.1f", wynik_pole);
        break;
    default:
        printf("Nieprawidlowy wybor. Zamknij i otworz program ponownie");
    }

    return 0;
}*/

// 7b

/*#include <stdio.h>
#include <stdlib.h>



int main()
{
    int liczba;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    printf("Oto podstawowe informacje o twojej liczbie, ktora jest %d:\n", liczba);

    if (liczba % 2 == 0) {
        printf("- Twoja liczba jest parzysta\n");
    } else {
        printf("- Twoja liczba jest nieparzysta\n");
    }

    if (liczba > 0) {
        printf("- Twoja liczba jest dodatnia\n");
    } else if (liczba < 0) {
        printf("- Twoja liczba jest ujemna\n");
    } else {
        printf("- Twoja liczba jest zerowa\n");
    }

    if (liczba > 100 && liczba < 500) {
        printf("- Twoja liczba nalezy do przedzialu liczb pomiedzy 100 a 500\n");
    } else {
        printf("- Twoja liczba nie nalezy do przedzialu liczb pomiedzy 100 a 500");
    }



    return 0;
}*/

// 7c

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    int suma = 0;
    int ilosc_liczb = 0;
    int liczby_ujemne = 0;
    double srednia= 0;


    while (1) {
        printf("Podaj liczbe: ");
        scanf("%d", &liczba);

        if (liczba == 0) {
            break;
        }

        suma = suma + liczba;

        if (liczba < 0) {
            liczby_ujemne++;
        }

        ilosc_liczb++;
    }

    srednia = (double)suma / ilosc_liczb;
    printf("Ilosc liczb podanych przez Ciebie: %d\n", ilosc_liczb);
    printf("Suma wszystkich liczb podanych przez Ciebie wynosi: %d\n", suma);
    printf("Ilosc liczb ujemnych podanych przez Ciebie wynosi: %d\n", liczby_ujemne);
    printf("Srednia arytmetyczna liczb podanych przez Ciebie wynosi: %.2f", srednia);


    return 0;
}*/
