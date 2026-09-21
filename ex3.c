#include <stdio.h>

int main() {
    int n;

    do {
        printf("\nIntroduceti un numar natural n (0 pentru iesire): ");
        scanf("%d", &n);

        if (n < 0) {
            printf("Avertizare: nu sunt acceptate valori negative!\n");
            continue;
        }

        if (n == 0) {
            printf("Programul s-a incheiat.\n");
            break;
        }

        int temp = n;
        int nrCifre = 0;
        int suma = 0;
        int invers = 0;

        while (temp > 0) {
            int cifra = temp % 10;

            nrCifre++;
            suma += cifra;
            invers = invers * 10 + cifra;

            temp = temp / 10;
        }

        int prim = 1;

        if (n < 2) {
            prim = 0;
        } else {
            int i = 2;

            while (i * i <= n) {
                if (n % i == 0) {
                    prim = 0;
                    break;
                }

                i++;
            }
        }

        printf("Numar de cifre: %d\n", nrCifre);
        printf("Suma cifrelor: %d\n", suma);
        printf("Inversul: %d\n", invers);

        if (prim) {
            printf("%d este numar prim.\n", n);
        } else {
            printf("%d nu este numar prim.\n", n);
        }

    } while (1);

    return 0;
}