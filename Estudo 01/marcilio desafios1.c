#include <stdio.h>
int main() {

    int n1;
    int aux = 1;

    printf("escolha um numero > ");
    scanf("%d", &n1);

    for (int i = n1; i > 0; i--) {
        
        int aux2 = aux;
        
        aux = i * aux;
        
        printf("%d x %d = %d\n", i, aux2, aux);

    }
    
    printf("o resultado e : %d", aux);
    
}