#include <stdio.h>
int main () {

    int n1;
    char res;

    do {
        printf("digite um valor maior que zero: \n");
        scanf("%d", &n1);

        if (n1 == 100) {
            printf("Obrigado, volte sempre!");
            break;
        }
        
    } while (n1 <= 10);
    
}