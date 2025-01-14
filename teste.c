#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("--------------------\n");
    printf("-JOGO DA ADVINHACAO-");
    printf("\n--------------------");

    int numeroalt = 42;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    while(1){
        printf("\nTentativa:%d", tentativas);
        printf("\nDigite um numero: ");
        scanf("%d", &chute);

        if(chute < 0){
            printf("Voce nao deve chutar numero negativos!\n");
            continue;
        }
        //Logica (Bool)
        int acertou = (chute == numeroalt);
        int maior = (chute > numeroalt);

        if(acertou){
            printf("\nVoce acertou!");
            printf("\nVoce precisou de %d tentativas!", tentativas);
            break;
        } 
        else if(maior){
            printf("\nVoce chutou %d, chutou alto!", chute);
        } 
        else{
            printf("\nVoce chutou %d, chutou baixo!", chute);
        }
        tentativas++;
        double novapontuacao = (abs)(chute - numeroalt) / 2.0;
        pontos = pontos - novapontuacao;
    }  
    printf("\nFim de Jogo!");
    printf("Sua pontuacao foi:%f!", pontos);
}