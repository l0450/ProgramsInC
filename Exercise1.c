#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int aplusbkwadrat;
    int aminusbkwadrat;
    int a2minusb2;
    int ado3minusbdo3;
    int ado3plusbdo3;

    printf("Podaj a: ");
    scanf("%d", &a);
    printf("Podaj b: ");
    scanf("%d", &b);

    // (a+b)^2
    aplusbkwadrat = (a*a) + (2*a*b) + (b*b);
    printf("(a+b)^2 : %d\n", aplusbkwadrat);

    // (a-b)^2
    aminusbkwadrat = (a*a) - (2*a*b) + (b*b);
    printf("(a-b)^2 : %d\n", aminusbkwadrat);

    // a^2 - b^2
    a2minusb2 = (a-b) * (a+b);
    printf("a^2 - b^2 : %d\n", a2minusb2);

    // a^3 - b^3
    ado3minusbdo3 = (a-b) * aplusbkwadrat; // Do tego wzoru skróconego mnozenia mozemy uzyc poprzednio zrobionej wartosci aplusbkwadrat
    printf("a^3 - b^3 : %d\n", ado3minusbdo3);

    // a^3 + b^3
    ado3plusbdo3 = (a+b) * aminusbkwadrat; // Do tego wzoru skróconego mnozenia mozemy uzyc poprzednio zrobionej wartosci aminusbkwadrat
    printf("a^3 - b^3 : %d\n", ado3plusbdo3);


    return 0;

}



