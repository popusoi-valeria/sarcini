# Proiect universitar – Exerciții în limbajul C

## Descriere

Acest proiect conține o serie de exerciții și probleme realizate în cadrul activităților universitare la specializarea Informatică. Scopul proiectului este dezvoltarea cunoștințelor de programare în limbajul C și formarea abilităților de rezolvare a problemelor algoritmice.

Exercițiile utilizează concepte de bază ale limbajului C, precum variabile, tipuri de date, operații matematice, citirea datelor de la tastatură și afișarea rezultatelor.

## Tehnologii utilizate

* Limbajul C
* GCC
* Visual Studio Code
* Git și GitHub

## Instalare și rulare

Pentru rularea proiectului este necesar un compilator C, precum GCC.

### 1. Clonarea proiectului

```bash
git clone https://github.com/popusoi-valeria/sarcini.git
```

### 2. Accesarea folderului proiectului

```bash
cd sarcini
```

### 3. Compilarea unui program

De exemplu, pentru fișierul `exemplu.c`:

```bash
gcc exemplu.c -o exemplu
```

### 4. Rularea programului

În Windows:

```bash
./exemplu
```

## Exemplu de program

Unul dintre exercițiile proiectului realizează conversia unei temperaturi din grade Celsius în Fahrenheit și afișează dimensiunea în octeți a tipurilor de date `int`, `float` și `double`.

Formula utilizată pentru conversie este:

```text
Fahrenheit = Celsius × 9 / 5 + 32
```

Exemplu de cod:

```c
#include <stdio.h>

int main(void) {
    double celsius, fahrenheit;

    printf("Introduceti temperatura (C): ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 9.0 / 5.0 + 32;

    printf("%.2lf C = %.2lf F\n\n", celsius, fahrenheit);

    printf("int    = %zu octeti\n", sizeof(int));
    printf("float  = %zu octeti\n", sizeof(float));
    printf("double = %zu octeti\n", sizeof(double));

    return 0;
}
```

### Exemplu de rulare

```text
Introduceti temperatura (C): 25
25.00 C = 77.00 F

int    = 4 octeti
float  = 4 octeti
double = 8 octeti
```

## Obiective

Prin realizarea acestor exerciții sunt urmărite:

* înțelegerea sintaxei limbajului C;
* utilizarea variabilelor și a tipurilor de date;
* realizarea calculelor matematice;
* citirea și afișarea datelor;
* dezvoltarea gândirii algoritmice;
* compilarea și rularea programelor.

## Autor

Valeria Popusoi
Studentă la specializarea Informatică
