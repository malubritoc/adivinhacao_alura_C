#include <stdio.h>

int main() {
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;
    int acertou = (chute == numerosecreto);

    printf("Qual é o seu chute?\n");
    scanf("%d", &chute);
    printf("Seu chute foi %d.\n", chute);

    if(acertou){
        printf("Acertou!\n");
    } else {
        int maior = chute > numerosecreto;

        printf("Errou!\n");

        if(maior){
            printf("Chute maior!\n");
        } else {
            printf("Chute menor!\n");
        }
    }

    return 0;
}