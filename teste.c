#include <stdio.h>

int main(){
    int numeroalt = 42;
    int chute;
    printf("Digite um numero: ");
    scanf("%d", &chute);
    printf("Seu chute foi: %d", chute);

    if(chute == numeroalt){
        printf("Voce acertou!!");
    } else{
        printf("\nVoce errou!0");
        if(chute > numeroalt){
            printf("\nSeu chute foi maior do  que o numero alt");
        } else{
            printf("\nSeu chute foi menor do que o  mumero  alt");
        }
    }
}