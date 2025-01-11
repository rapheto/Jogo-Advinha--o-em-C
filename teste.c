#include <stdio.h>

#define TENTATIVAS 3
int main(){

    printf("--------------------\n");
    printf("-JOGO DA ADVINHACAO-");
    printf("\n--------------------");

    int numeroalt = 42;
    int chute;

    for(int i = 1; i <= TENTATIVAS; i++){
        printf("\nVoce tem %d/%d tentativas", i, TENTATIVAS);
        printf("\nDigite um numero: ");
        scanf("%d", &chute);

        //Logica (Bool)
        int acertou = (chute == numeroalt);
        int maior = (chute > numeroalt);

        if(acertou){
            printf("Seu chute foi: %d", chute);
            printf("\nVoce acertou!!");
            break;
        } 
        else if(maior){
            printf("\nVoce chutou %d, chutou alto", chute);
        } 
        else{
            printf("\nVoce chutou %d, chutou baixo", chute);
        }
        printf("\nFim de Jogo!");
    }
    
    
}