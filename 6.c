
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x; 
    char caractere;
    
    printf("Digite N: \n");
    scanf("%d", &n);
    
    for(x = 1; x <= n; x++) {
        printf("Digite a letra maiúscula: \n");
        scanf(" %c", &caractere);
        
        if(caractere >= 65 && caractere < 90) {
            caractere = caractere + 1; 
            printf(" %c\n", caractere);
        } else {
            caractere = caractere - 25;
            printf(" %c\n", caractere);
        }
        
    
    }
    return 0;
    
}
