#include <stdio.h>

int main(void) {
    double a, b;
    char op;

    printf("Primul numar: ");
    scanf("%lf", &a);

    printf("Al doilea numar: ");
    scanf("%lf", &b);

    printf("Operatorul (+ - * /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.3lf\n", a, b, a + b);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.3lf\n", a, b, a - b);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.3lf\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Eroare: Impartire la zero!\n");
            } else {
                printf("%.2lf / %.2lf = %.3lf\n", a, b, a / b);
            }
            break;
        default:
            printf("Eroare: Operator necunoscut!\n");
            break;
    }

    return 0;
}