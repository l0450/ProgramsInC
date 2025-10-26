#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int number;
    printf("Wskaz liczbe ktora wystepuje w ciagu Fibonacciego: ");
    scanf("%d", &number);

    int result = fibonacci(number);

    printf("Dana liczba %d w ciagu Fibonacciego to: %d", number, result);

    return 0;
}

