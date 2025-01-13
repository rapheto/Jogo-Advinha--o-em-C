#include <stdio.h>

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
            double novapontuacao = (chute - numeroalt) / 2.0;
            pontos = pontos - novapontuacao;
        } 
        else{
            printf("\nVoce chutou %d, chutou baixo!", chute);
            double novapontuacao = (chute - numeroalt) / 2.0;
            pontos = pontos + novapontuacao;
        }
        tentativas++;
    }  
    printf("\nFim de Jogo!");
    printf("Sua pontuacao foi:%f!", pontos);
}