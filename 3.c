
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, n;
    char minusculo, maiusculo;
    
    printf("N: \n");
    scanf("%d", &n);
    
    for(x = 1; x <= n; x++) {
        printf("Digite uma letra: \n");
        scanf(" %c", &minusculo);
        
        if( 97 <= minusculo && minusculo <= 122) {
            maiusculo = minusculo - 32;
            printf("\n %c \n", maiusculo);
        } else {
            printf("Nao é minuscula!");
        }
    }

    return 0;
}
