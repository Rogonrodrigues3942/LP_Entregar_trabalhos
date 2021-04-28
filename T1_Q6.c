#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int LeComparaVet (int T);
void printArray(int vezes, int numero);

int main()
{
int total = 0;
LeComparaVet(total);
puts("\n");

return 0;
}


int LeComparaVet (int T){

int i, j, aux, VRand, V1[10], V2[10],V3[20];


srand(time(0));

//Gera Valores Aleatorios para o Vetor1
printf("\n\nInmprimir vetor 1 = ");
for(i = 0; i < 10; i++){
    VRand =  (rand() % 10);
    printf(" %d  ", V1[i]=VRand);
}

printf("\n");

//Gera Valores Aleatorios para o Vetor2
printf("\n\nInmprimir vetor 2 = ");
for(i = 0; i < 10; i++){
    VRand =  (rand() % 10);
    printf("%d  ", V2[i]=VRand);
}

printf("\n\n");


// gerar um unico vetor
for(i = 0; i < 10; i++){
         V3[i] = V1[i];
         V3[i+9] = V2[i];
       }
       for(j = 0; j < 20; j++){
         V3[j+10] = V2[j];
       }


       for(i = 0; i < 20; i++){
        for(j = i + 1; j < 20; j++){
            if(V3[i] < V3[j])
            {
                aux = V3[i];
                V3[i] = V3[j];
                V3[j] = aux;
            }
        }
       }


printf("vetor 3 = ");
for(i = 0; i < 20; i++)
    printf("%d ", V3[i]);
puts("");

int temp;
int repetidos = 1;


temp = V3[0];
for (i = 1; i < 21; i++) {
    if( V3[i] == temp ){
        repetidos++;
    }
    else {

        if( repetidos > 1 ) {
            printf("\nO valor %i esta repetido %i vezes\n", temp, repetidos);
            printArray(repetidos, temp);
            repetidos = 1;
        }
        temp = V3[i];
    }
}
return 0;
}

void printArray(int vezes, int numero){
    for (int i = 0; i < vezes; i++)
        printf("%d  ", numero);

}