#include <stdio.h>
#include <stdlib.h>

int main()
{
    double dochod;
    double podatek;

    printf("Podaj swoj dochod roczny:\n");
    scanf("%lf", &dochod);

    if (dochod <= 50000){
        podatek = 10.00;
        printf("Wysokosc podatku wynosi: %.2lf\n", podatek);
    } else if (dochod > 50000 && dochod <= 100000) {
        podatek = 15.00;
        printf("Wysokosc podatku wynosi: %.2lf\n", podatek);
    } else {
        podatek = 20.00;
        printf("Wysokosc podatku wynosi: %.2lf\n", podatek);
    }




    return 0;
}

