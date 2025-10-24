#include <stdio.h>
#include <stdlib.h>

int main()
{
    double dochod;
    double podatek;

    printf("Podaj swoj dochod roczny:\n");
    scanf("%lf", &dochod);

    if (dochod <= 50000){
        podatek = 0.10;
        dochod = dochod * podatek;
        printf("Wysokosc podatku wynosi: %.2lf\n", dochod);
    } else if (dochod > 50000 && dochod <= 100000) {
        podatek = 0.15;
        dochod = dochod * podatek;
        printf("Wysokosc podatku wynosi: %.2lf\n", dochod);
    } else {
        podatek = 0.20;
        dochod = dochod * podatek;
        printf("Wysokosc podatku wynosi: %.2lf\n", dochod);
    }




    return 0;
}
