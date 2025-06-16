#include <stdio.h>
int main() {

    int n1;
    int n2 = 1;
    int res;

    for (int i = n1; i > 0; i++)
    {
        int n3 = n2;

        n2 = i+n2;

        printf("%d + %d = %d", i, n3, n1);

        if (res == "sair")
        {
            break;
        }
        
    }
    
}