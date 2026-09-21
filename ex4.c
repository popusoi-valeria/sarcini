#include <stdio.h>

int main() {
    int n;
    int note[30];

    // Citirea numarului de studenti
    do {
        printf("Introduceti numarul de studenti (1-30): ");
        scanf("%d", &n);

        if (n < 1 || n > 30) {
            printf("Valoare invalida! Introduceti un numar intre 1 si 30.\n");
        }
    } while (n < 1 || n > 30);

    // Citirea notelor
    for (int i = 0; i < n; i++) {
        do {
            printf("Nota studentului %d (1-10): ", i + 1);
            scanf("%d", &note[i]);

            if (note[i] < 1 || note[i] > 10) {
                printf("Nota invalida! Introduceti o nota intre 1 si 10.\n");
            }
        } while (note[i] < 1 || note[i] > 10);
    }

    // Calcularea sumei
    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma += note[i];
    }

    // Calcularea mediei
    float media = (float)suma / n;

    // Determinarea maximului si minimului
    int maxim = note[0];
    int minim = note[0];

    for (int i = 1; i < n; i++) {
        if (note[i] > maxim) {
            maxim = note[i];
        }

        if (note[i] < minim) {
            minim = note[i];
        }
    }

    // Determinarea studentilor cu nota strict peste medie
    int pesteMedie = 0;

    for (int i = 0; i < n; i++) {
        if (note[i] > media) {
            pesteMedie++;
        }
    }

    // Afisarea rezultatelor
    printf("\nMedia: %.2f\n", media);
    printf("Maxim / minim: %d / %d\n", maxim, minim);
    printf("Peste medie: %d studenti\n", pesteMedie);

    // Afisarea notelor in ordine inversa
    printf("Note in ordine inversa: ");

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", note[i]);
    }

    printf("\n");

    return 0;
}