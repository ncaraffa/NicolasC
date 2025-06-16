#include <stdio.h>
int main() {

    int soma = 0;
    int multiplicacao = 0;
    int divisao = 0;
    int subtracao = 0;
    int escolha = 0;
    int soma2 = 0;
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;

    printf("escolha um numero > ");
    scanf("%d", &n1);
    
    
    printf("escolha outro numero > ");
    scanf("%d", &n2);
    
    printf("qual operacao deseja fazer?\n");
    printf("1. Soma\n");
    printf("2. Multiplicacao\n> ");
    scanf("%d", &escolha);

    soma = n1+n2;
    //soma2 = soma;
    multiplicacao = n1*n2;
    divisao = n1/n2;
    subtracao = n1-n2;
    //n3 = n1;
    //n4 = n2;

    if (escolha == 1) {
        printf("%d + %d = %d", n1, n2, soma);
        if (escolha == 1 && soma == 88) {
            printf(" (Heil hitler)");
        }
        
    }
    if (escolha == 2) {
        printf("%d x %d = %d", n1, n2, multiplicacao);
        if (escolha == 2 && multiplicacao == 88) {
            printf(" (Heil hitler)");
        }
    }
    
        //if (soma == 88) {
        //printf("%d + %d = %d (Heil Hitler))", n3, n4, soma);
    //}
    //do {
        
        //printf("%d + %d == %d", n1, n2, soma);

//    } while (soma == 88);
    

















}