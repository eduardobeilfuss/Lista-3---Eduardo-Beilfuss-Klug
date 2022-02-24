// Eduardo Beilfuss - exercício 1


#include <stdio.h>

int main()
{
    char ch;
    int n, x;
    
    printf("N: ");
    scanf("%d", &n);
    
    for(x = 1 ; x <= n; x++){
        printf("Digite o caractere: ");
        scanf(" %c", &ch);
        
        if (ch >= 'A' && ch <= 'Z') {
            printf("Sim\n");
        } else {
            printf("Nao\n");
        }
        
        
    }    
    

    return 0;
}
