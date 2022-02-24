
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha, coluna, x, y; 
    char caractere;
    
    printf("Digite o numero de linhas: \n");
    scanf("%d", &linha);
     printf("Digite o numero de colunas: \n");
    scanf("%d", &coluna);
     printf("Digite N: \n");
    scanf(" %c", &caractere);
    
    for(x = 1; x <= linha; x++) {
        printf("\n");
        
        for(y = 1; y <= coluna; y++) {
            printf("%c", caractere);
        }
        
    
    }
    return 0;
    
}
