// Eduardo Beilfuss - exercício 8


#include <stdio.h>

int main()
{
   char caractere1, caractere2;
   int soma=0;
   
   printf("Digite o primeiro caractere: ");
   scanf(" %c", &caractere1);
   
   printf("Digite o segundo caractere: ");
   scanf(" %c", &caractere2);
   
   while(caractere1 != caractere2) {
       if(caractere2 == caractere1 + 1 ) {
           soma++;
       }
       
       printf("Digite o primeiro caractere: ");
       scanf(" %c", &caractere1);
   
       printf("Digite o segundo caractere: ");
       scanf(" %c", &caractere2);
   }
    
    printf("\nCaracteres iguais.\n");
    printf("\n%d\n", soma);

    return 0;
}
