#include <stdio.h>

int partida(int );
int chegada(int );

int main (void)
{
    int tempo[7][7] ={{0, 2, 11, 6, 15, 11, 1},
                      {2, 0, 7, 12, 4, 2, 15},
                      {11, 7, 0, 11, 8, 3, 13},
                      {6, 12, 11, 0, 10, 2, 1},
                      {15, 4, 8, 10, 0, 5, 13},
                      {11, 2, 3, 2, 5, 0, 14},
                      {1, 15, 13, 1, 13, 14, 0}};

    int origem, destino, i, j, res = 0;
    
    puts("\n**** Calcule o tempo de voo do trajeto do aviao. ****\n\n");

    printf("    A   B   C   D   E   F   G");
    printf("\nA");
    for(j = 0; j < 7; j++)
        printf("  %2d", tempo[0][j]);

    printf("\nB");
    for(j = 0; j < 7; j++)
        printf("  %2d", tempo[1][j]);

    printf("\nC");
    for(j = 0; j < 7; j++)
        printf("  %2d", tempo[2][j]);

    printf("\nD");
    for(j = 0; j < 7; j++)
        printf("  %2d", tempo[3][j]);

    printf("\nE");
    for(j = 0; j < 7; j++)
        printf("  %2d", tempo[4][j]);

    printf("\nF");
    for(j = 0; j < 7; j++)
        printf("  %2d", tempo[5][j]);

    printf("\nG");
    for(j = 0; j < 7; j++)
        printf("  %2d", tempo[6][j]);
    
    puts("\n\nLegenda de origem e destino de trajeto: \n\n0 equivale a A; \n1 equivale a B; \n2 equivale a C; \n3 equivale a D; \n4 equivale a E; \n5 equivale a F; \n6 equivale a F");
    puts("\nA linhas da matriz acima representam as cidades de origem e as colunas as cidades de destino.\n");
    //Entrada de dados
    puts("\nDigite um numero para a origem do trajeto: ");
    fflush(stdin);
    scanf("%d", &origem);
    puts("Digite um numero para o destino do trajeto: ");
    fflush(stdin);
    scanf("%d", &destino);
    puts("");

    //Processamento
    partida(origem);
    chegada(destino);
    for(j = 0; j <= destino; j++)
        res += tempo[origem][j];

    //Saída de dados
    printf("\nTempo de trajeto: %d horas.\n\n", res);
   
    return 0;
}

int partida(int origem){

    switch(origem){
        case 0:
            puts("Partiu da cidade A");
            break;
         case 1:
            puts("Partiu da cidade B");
            break;
         case 2:
            puts("Partiu da cidade C");
            break;
         case 3:
            puts("Partiu da cidade D");
            break;
         case 4:
            puts("Partiu da cidade E");
            break;
         case 5:
            puts("Partiu da cidade F");
            break;
         case 6:
            puts("Partiu da cidade G");
            break;
        default:
            puts("Opção errada");
            break;
    }
    return 0;
}
int chegada(int destino){

    switch(destino){
        case 0:
            puts("Chegou a cidade A");
            break;
         case 1:
            puts("Chegou a cidade B");
            break;
         case 2:
            puts("Chegou a cidade C");
            break;
         case 3:
            puts("Chegou a cidade D");
            break;
         case 4:
            puts("Chegou a cidade E");
            break;
         case 5:
            puts("Chegou a cidade F");
            break;
         case 6:
            puts("Chegou a cidade G");
            break;
        default:
            puts("Opção errada");
            break;
    }
    return 0;
}