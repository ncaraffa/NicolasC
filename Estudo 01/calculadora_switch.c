#include <stdio.h>
int main () {

    int n1;
    int n2;
    int escolha;
    int soma;
    int subtracao;
    int divisao;
    int multiplicacao;

    printf("Escolha um valor: \n");
    scanf("%d", &n1);

    printf("Escolha outro valor: \n");
    scanf("%d", &n2);

    printf("Qual operacao deseja fazer?:\n 1.soma\n 2.subtracao\n 3.multiplicacao\n 4.divisao\n");
    scanf("%d", &escolha);
    
    soma = n1+n2;
    subtracao = n1-n2;
    multiplicacao = n1*n2;
    divisao = n1/n2;

    switch (escolha) {
    case 1:
        
        printf("%d + %d = %d\n ", n1, n2, soma);
           
        if (escolha == 1 && soma == 55) {
            
            printf("O numero da sorte!");

        }

        break;

    case 2:
        
        printf("%d - %d = %d\n", n1, n2, subtracao);
        
        if (escolha == 2 && subtracao == 55) {
            
            printf("O numero da sorte!");

        }

        break;

    case 3:

        printf("%d x %d = %d\n", n1, n2, multiplicacao);

        if (escolha == 3 && multiplicacao == 55) {
            
            printf("O numero da sorte!");

        }

        break;

    case 4:

        printf("%d : %d = %d\n", n1, n2, divisao);

        if (escolha == 4 && divisao == 55) {
            
            printf("O numero da sorte!");

        }

        break;
    
    default:

        printf("Escolha uma opcao valida!");

        break;
    }

}