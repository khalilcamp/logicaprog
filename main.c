// Projeto de Pedra Papel Tesoura.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //STRING(strg1, strg2)==0
    //Pedra, papel, tesoura!
    char player[256];
    char player2[256];

    printf("Player1... Sua vez...");
    scanf("%s", &player);

    printf("\nPlayer2... sua vez...");
    scanf("%s", &player2);

    printf("\nAguarde, estamos calculando o resultado...\n");
    if (strcmp(player,"papel")==0){
            if (strcmp(player2,"papel")==0){
            printf("Empate foda.");

            }else if(strcmp(player2,"tesoura")==0){
            printf("Player2 ganhou man.");
            }else if(strcmp(player2,"pedra")==0){
            printf("Player2 perdeu man.");
            }else{
            printf("Player2 fez graça man.");
            }

    }else if(strcmp(player,"tesoura")==0){
                    if (strcmp(player2,"papel")==0){
            printf("P2 Perdeu.");

            }else if(strcmp(player2,"tesoura")==0){
            printf("Empate.");
            }else if(strcmp(player2,"pedra")==0){
            printf("Player2 ganhou.");
            }else{
            printf("Player2 fez graça man.");
            }
    }else if(strcmp(player,"pedra")==0){
            if (strcmp(player2,"papel")==0){
            printf("P2 ganhou.");

            }else if(strcmp(player2,"tesoura")==0){
            printf("P2 perdeu.");
            }else if(strcmp(player2,"pedra")==0){
            printf("Player2 empatou.");
            }else{
            printf("Player2 fez graça man.");
            }
    }else{
        printf("\nPara de fazer graça po, joga direitinho.");
    }


    return 0;
}
