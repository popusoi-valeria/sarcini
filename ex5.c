#include <stdio.h>

// Prototipurile functiilor
void swap(int *a, int *b);
int cmmdc(int a, int b);

int main() {
    int a, b, c;

    // Citirea celor trei numere
    printf("Introduceti a, b si c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Ordonarea crescatoare folosind exclusiv swap
    if (a > b) {
        swap(&a, &b);
    }

    if (a > c) {
        swap(&a, &c);
    }

    if (b > c) {
        swap(&b, &c);
    }

    // Afisarea numerelor ordonate
    printf("Ordonat: %d %d %d\n", a, b, c);

    // Calcularea CMMDC
    int rezultat = cmmdc(a, b);
    rezultat = cmmdc(rezultat, c);

    printf("cmmdc    : %d\n", rezultat);

    return 0;
}

// Functia swap - interschimba doua valori prin pointeri
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Functia pentru calcularea CMMDC folosind algoritmul lui Euclid
int cmmdc(int a, int b) {
    while (b != 0) {
        int rest = a % b;
        a = b;
        b = rest;
    }

    return a;
}