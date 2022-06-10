#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <windows.h>

int main()
{   //Estrutura
    int vida = 100, dano = 100, danototal, selec,  classe;
    //Personagem
    char nome[30], sobrenome[30];
    //Classes
    int guerreiro = 1000, mago = 50, ladino = 100;
    //Monstros
    int slime = 100, ladrao = 1000, dragao = 10000;
    //Itens
    int pocao = 50;
    /*História
    A História começa em um mundo chamado Steirgale.
    */
    
    printf("                                                                Boas-Vindas!\n\n\n\nComo você será conhecido(a) neste novo mundo, aventureiro(a)?\n\n\nInsira Seu Nome: ");
    scanf("%s %s", nome, sobrenome);
    printf("\n\n\nOlá, %s %s. Poderoso (a) ser escolhido.\n\n\nEscolha sua classe:\n\n\n1.Guerreiro\n2. Mago\n3.Ladino\n\n\nSeleção: ", nome, sobrenome);
    scanf("%d", &classe);
    
    switch(classe){
        case 1:
            printf("Você escolheu Guerreiro.\nSeus Status são:\n1000 HP| 100 SP\n\n");
            printf("\n\n\nBem-Vindo ao mundo de Steirgale, %s. Você acorda depois de algo que parecia mais um pesadelo, ao abrir seus olhos você se\ndepara com uma floresta escura e úmida, quase como um pântano, seus sentidos começam a retornar\ne você percebe sons de algo parecido com gotas caindo no chão.\n Um slime aparece e o ataca.\n", nome);
             do{
    printf("                                                            O que você faz?\n1.Atacar\n2.Fugir\n");
    scanf("%d", &selec);
    srand((unsigned)time(NULL));
    printf("%s recebe %d de dano\n",nome, rand () % dano);
    scanf("%d", &dano);
    danototal = vida - dano;
    printf("Sua vida agora é %d", danototal);
    }
    while(selec!=2);
        break;
        
        case 2:
            printf("Você escolheu Sacerdote.\nSeus Status são:\n100 HP| 1000 MP\n\n");
            printf("\n\n\nBem-Vindo ao mundo de Steirgale, %s. Você acorda depois de algo que parecia mais um pesadelo, ao abrir seus olhos você se\ndepara com uma floresta escura e úmida, quase como um pântano, seus sentidos começam a retornar\ne você percebe sons de algo parecido com gotas caindo no chão.\n Um slime aparece e o ataca.\n", nome);
             do{
    printf("                                                            O que você faz?\n1.Atacar\n2.Fugir\n");
    scanf("%d", &selec);
    srand((unsigned)time(NULL));
    printf("%s recebe %d de dano\n",nome, rand () % dano);
    scanf("%d", &dano);
    danototal = vida - dano;
    printf("Sua vida agora é %d", danototal);
    }
    while(selec!=2);
        break;
        
        case 3:
            printf("Você escolheu Ladino.\nSeus Status são:\n500 HP| 500 SP\n\n");
            printf("\n\n\nBem-Vindo ao mundo de Steirgale, %s. Você acorda depois de algo que parecia mais um pesadelo, ao abrir seus olhos você se\ndepara com uma floresta escura e úmida, quase como um pântano, seus sentidos começam a retornar\ne você percebe sons de algo parecido com gotas caindo no chão.\n Um slime aparece e o ataca.\n", nome);
             do{
    printf("                                                            O que você faz?\n1.Atacar\n2.Fugir\n");
    scanf("%d", &selec);
    srand((unsigned)time(NULL));
    printf("%s recebe %d de dano\n",nome, rand () % dano);
    scanf("%d", &dano);
    danototal = vida - dano;
    printf("Sua vida agora é %d", danototal);
    }
    while(selec!=2);
        break;
        
        case 4:
            printf("Você escolheu a classe secreta: Deus dos Otaku. Parabéns, senpai.\n\n");
            printf("\n\n\nVocê acorda de algo parecido com um sonho, ao olhar em volta você percebe que\nestava em Akihabara, o Mundo Sagrado. Quando ouve um som estranho de algo saltitando...\n Um Dakimakura aparece e o abraça.\n");
             do{
    printf("                                                            O que você faz?\n1.Atacar\n2.Fugir\n");
    scanf("%d", &selec);
    srand((unsigned)time(NULL));
    printf("%s recebe %d de dano\n",nome, rand () % dano);
    scanf("%d", &dano);
    danototal = vida - dano;
    printf("Sua vida agora é %d", danototal);
    }
    while(selec!=2);
            
        break;
        
}
    return 0;
}
