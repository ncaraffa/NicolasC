#include <stdio.h>
int main() {

    int soma;
    int multiplicacao;
    int divisao;
    int subtracao;
    int escolha;
    int n1;
    int n2;
   
    printf("escolha um numero > ");
    scanf("%d", &n1);
    
    printf("escolha outro numero > ");
    scanf("%d", &n2);
    
    printf("qual operacao deseja fazer?\n 1.Soma\n 2.Subtracao\n 3.Multiplicacao\n 4.Divisao\n");
    scanf("%d", &escolha);

    soma = n1+n2;
    subtracao = n1-n2;
    multiplicacao = n1*n2;
    divisao = n1/n2;
    
    if (escolha == 1) {
        printf("%d + %d = %d\n", n1, n2, soma);
        if (escolha == 1 && soma == 55) {
            printf("O numero da sorte!");
        }
    }
    if (escolha == 2) {
        printf("%d - %d = %d\n", n1, n2, subtracao);
        if (escolha == 2 && subtracao == 55) {
            printf("O numero da sorte!");
        }
    }
    if (escolha == 3) {
        printf("%d x %d = %d\n", n1, n2, multiplicacao);
        if (escolha == 3 && multiplicacao == 55) {
            printf("O numero da sorte!");
        }
    }
    if (escolha == 4) {
        printf("%d : %d = %d\n", n1, n2, divisao);
        if (escolha == 4 && divisao == 55) {
            printf("O numero da sorte!");
        }
    }
}