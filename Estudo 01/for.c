#include <stdio.h>
int main () {

    int i;
    int res;
    
    for ( i = 1; i <= 10; i++) {
        
        printf("%d ", i);
        
        if (i == 7) {
            printf("\n qual numero vem depois do 7?: \n");
            scanf("%d", &res);

            if (i == 7 && res == 8) {
                printf("Isso mesmo! E o 8 \n");
            }
                else {
                    printf("Voce errou :(");
                    break;
                }

            continue;

            printf("\n %d", i);
        }
    }
}