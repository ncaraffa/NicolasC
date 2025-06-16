#include <stdio.h>
int main () {

    int i;
    
    for ( i = 1; i <= 10; i++) {
        
        if (i == 5) {
            printf("5 = numero suspeito \n");
            continue;
        }
        printf("%d \n", i);
    }
}