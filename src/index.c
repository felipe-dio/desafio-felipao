#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[30];
    char titulo[30];
    int XP;

    printf("Ola Heroi! \n");
    printf("Qual e seu nome? \n");
    scanf("%s", nome);

    printf("Qual e a sua quantia de XP? \n");
    scanf("%d", &XP);

    if (XP < 1000) {
        strcpy(titulo, "Ferro");
    } else if (XP >= 1000 && XP <= 2000) {
        strcpy(titulo, "Bronze");
    } else if (XP >= 2001 && XP <= 5000) {
        strcpy(titulo, "Prata");
    } else if (XP >= 5001 && XP <= 7000) {
        strcpy(titulo, "Ouro");
    } else if (XP >= 7001 && XP <= 8000) {
        strcpy(titulo, "Platina");
    } else if (XP >= 8001 && XP <= 9000) {
        strcpy(titulo, "Ascendente");
    } else if (XP >= 9001 && XP <= 10000) {
        strcpy(titulo, "Imortal");
    } else if (XP >= 10001) {
        strcpy(titulo, "Radiante");
    }

    printf("O Heroi de nome %s esta no nivel de %s\n", nome, titulo);

    return 0;
}