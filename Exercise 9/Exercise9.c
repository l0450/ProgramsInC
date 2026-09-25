#include <stdio.h>

#define N 3

void wczytajMacierz(FILE *plik, int M[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            fscanf(plik, "%d", &M[i][j]);
        }
    }
}

void zapisMacierz(FILE *plik, int M[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            fprintf(plik, "%d ", M[i][j]);
        }
        fprintf(plik, "\n");
    }
}

void pomnozMacierze(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    FILE *in = fopen("C:\\Users\\Admin\\Downloads\\wejscie.txt", "r");
    if (!in) {
        perror("Nie mozna otworzyc pliku wejscie.txt");
        return 1;
    }

    int A[N][N], B[N][N], C[N][N];

    wczytajMacierz(in, A);
    wczytajMacierz(in, B);
    fclose(in);

    pomnozMacierze(A, B, C);

    FILE *out = fopen("C:\\Users\\Admin\\Downloads\\wyjscie.txt", "w");
    if (!out) {
        perror("Nie mozna otworzyc pliku wyjscie.txt");
        return 1;
    }

    zapisMacierz(out, C);
    fclose(out);

    printf("Otworz plik wyjscie.txt i zobacz wynik mnozenia macierzy!\n");

    return 0;
}
