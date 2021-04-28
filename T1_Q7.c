/* "Uma funcao recursiva eh uma funcao que chama a si mesma para executar uma operação específica. "
("Fonte: Biblia do C/C++ - topico 252 - pagina 129.\n\n");*/

#include <stdio.h>
#include <stdlib.h>

int recursiva (int, int);

int  main(void)
{

    int ini = 0, fim = 0, soma = 0;

    puts("\nFuncao Recursiva\n\n");
   
    puts("Digite o valor de inicio: ");
    scanf("%d", &ini);
    puts("Digite um valor final maior que o inicial: ");
    scanf("%d", & fim);
    
    //chamada da função
    soma = recursiva(ini, fim);
    printf("O valor da soma sequncia eh: %4d\n", soma);
    

    return 0;
}

int recursiva(int comeco, int max){

    int soma = comeco;

    if ( comeco <= max)
        return soma + recursiva(++comeco, max);

    return 0;
    
}