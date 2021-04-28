#include <stdio.h>

int main (void){

    int vet[15] = {50, 99, 29, 33, 39, 13, 1, 71, 42, 48, 15, 4, 19, 18, 9};
    int i, j, aux;

    puts("\n\n*****\nBubble Sort\n**********\n");

    printf("vetor = [ ");
    for(i = 0; i < 15; i++)
        printf("%d ", vet[i]);
    puts("]");

    
    for(i = 0; i < 14; i++)
        for(j = i + 1; j < 15; j++)
            if(vet[i] > vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
    
    puts("\n\nOrdenacao realizada");

    printf("vetor = [ ");
       for(i = 0; i < 15; i++)
          printf("%d ", vet[i]);
    puts("]");
    
    puts("");

    return 0;
}