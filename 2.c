#include <stdio.h>

int main()
{
    char letra;
    int minuscula;
    
   printf("Digite uma letra: ");
  
   minuscula = 0;
   
   while(letra != 'F') {
    scanf("%c", &letra);
        
       if (letra >= 'a' && letra <= 'z') {
           minuscula++;
       }
       printf("Digite uma letra: ");
       scanf("%c", &letra);
   }
   
   printf("%d", minuscula);
}
