
#include <stdio.h>

int main()
{
    int x, n, t, conv, soma; 
    char caractere;
    
    printf("Digite N: \n");
    scanf("%d", &n);
    
    printf("Digite T: \n");
    scanf("%d", &t);
    
    printf("Digite o caractere: \n");
    scanf(" %c", &caractere);
    
    for(x = 1; x <= n; x++ ) {
        
        if ( 48 <= caractere && caractere <= 57){
       conv = caractere - 48;
       printf("\n%d", conv);
       soma = t + conv;
       printf("\n%d", soma);
       printf("\nDigite o caractere:\n");
       scanf(" %c", &caractere);
        }
    
    if (65 <= caractere && caractere <= 70) {
       conv = caractere - 55;
       printf("\n%d", conv);
       soma = t + conv;
       printf("\n%d", soma);
       printf("\nDigite o caractere:\n");
       scanf(" %c", &caractere);
        } 
    
    else {
        printf("\n\nDigito invalido");
        printf("\nDigite o caracter:\n");
        scanf(" %c", &caractere);
        }
    }
    return 0;
    
}
