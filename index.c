// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // variavel tipo real // float ponto flutuante
    float nota1;
    float nota2;
    float media;
    
    printf ("digite a primeira nota: ");
    //scanf para ler o valor da variavel
    //%f tipo de valor
    scanf ("%f", &nota1);
    
    printf ("digite a segunda nota: ");
    scanf ("%f", &nota2);
    
    media= (nota1+nota2) / 2;
    //%.2f para exibir somente um valor
    printf(" a media final é: %.2f", media);
    
    if(media>=6.5){
    printf("\nvocê foi aprovado!");
    }
     else if (media==5) {
       printf("\nvocê está de recuperação");
     }
       else{
           printf("\nvocê está recuperado");
       }
   
    return 0;
    
}
