/*Bingo:
- Este bingo tem duas cartelas de 10 números cada, criadas como matriz 2x5;
- A cartela que acertar 5 dezenas primeiro é a vencedora;
- O sorteio foi codificado com a função srand(), para gerar número de 1 a 99;
- 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int cart1[2][5] = {{34, 01, 14, 65, 88},
                       {04, 45, 63, 24, 51}};

    int cart2[2][5] = {{18, 19, 03, 71, 99},
                       {28, 33, 82, 50, 64}};

    int confCart1[5], confCart2[5];
    int i, j, cont1 = 0, cont2 = 0, pesq;
    
    puts("\n\n*****\nJogo de Bingo\n**********");
    puts("Apresente as cartelas\n\n");

    printf("  cartela 1  ");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 5; j++){
            if( j % 5 == 0)
                puts("") ;
            printf("%2d ", cart1[i][j]);
          
        }
    
    puts("\n");

    printf("  cartela 2");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 5; j++){
            if( j % 5 == 0)
                puts("") ;
            printf("%2d ", cart2[i][j]);
          
        }
    
    puts("\n\nSorteando numeros e verificando as cartelas.\n\n");

    puts("numeros sendo sorteados ... ");

    cont1 = 0;
    cont2 = 0;

    while(cont1 <= 5  && cont2 <= 5)
    {        
       // srand(time(0));
        pesq = 1 + (rand() % 100);
        //printf("%d ", pesq);

            for(i = 0; i < 2; i++)
                for(j = 0; j < 5; j++)
                {
                    if( pesq == cart1[i][j])
                    {
                        confCart1[cont1] = pesq;
                        cont1++;
                        cart1[i][j] = 0;
                        
                        if(cont1 == 5){
                            puts("\nCartela 1 vencedora. numeros =");
                            for (i = 0; i < cont1; i++)
                                printf("%d ", confCart1[i]);
                            puts("\nFim de Jogo!!\n\n");
                            return 0;
                        }
                           
                    }
                }
   
       
            for(i = 0; i < 2; i++)
                for(j = 0; j < 5; j++)
                {
                    if( pesq == cart2[i][j])
                    {
                        confCart2[cont2] = pesq;
                        cart2[i][j] = 0;
                        cont2++;
                         if(cont2 == 5){
                            puts("\nCartela 2 vencedora. ");
                            for (i = 0; i < cont2; i++)
                                printf("%d ", confCart2[i]); 
                            puts("\nFim do jogo!!\n\n");
                            return 0;
                         }
                    }
                }
       
       
    } //Fim do while principal

    puts("\n");

    return 0;
}