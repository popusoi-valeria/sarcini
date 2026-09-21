#include <stdio.h>

int main(void) {
    // Declaram variabilele pentru valori reale (double)
    double celsius, fahrenheit;

    // Citim valoarea temperaturii in Celsius de la tastatura
    printf("Introduceti temperatura (C): ");
    scanf("%lf", &celsius);

    // Calculam temperatura in Fahrenheit folosind formula
    // Folosim 9.0 / 5.0 pentru a evita impartirea intreaga (9/5 ar da 1)
    fahrenheit = celsius * 9.0 / 5.0 + 32;

    // Afisam rezultatul cu exact doua zecimale (%.2lf)
    printf("%.2lf C = %.2lf F\n\n", celsius, fahrenheit);

    // Afisam dimensiunea in octeti a tipurilor de date cerute
    printf("int    = %zu octeti\n", sizeof(int));
    printf("float  = %zu octeti\n", sizeof(float));
    printf("double = %zu octeti\n", sizeof(double));

    return 0;
}