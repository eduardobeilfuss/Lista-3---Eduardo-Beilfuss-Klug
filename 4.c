
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    int constante;
    
    printf("Digite uma letra: \n");
    scanf("%c", &letra);
    
    while(letra != '$') {
        
        if(letra >= 65 && letra <= 90) {
            constante = letra - 64;
            printf("%d\n", constante);
        } else {
            printf(" ");
        }
        
        printf("Digite uma letra: \n");
        scanf(" %c", &letra);
    }

    return 0;
}
