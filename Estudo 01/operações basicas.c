#include <stdio.h>
int main() {
    int escolha;

    int escolha2;

    printf("escolha um numero > ");

    scanf("%d", &escolha);

    printf("escolha outro numero > ");

    scanf("%d", &escolha2);

    printf("o a soma dos numeros equivale a: %d", escolha*escolha2);

    return 0;
}