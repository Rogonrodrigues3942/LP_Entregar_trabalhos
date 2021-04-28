#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char A[50], B[50], C[100];
    int tam=0;

    puts("\n*** Intercalando Caracteres ***\n\n");

    printf("Valor de A: ");
    scanf("%s",A);

    printf("Valor de B: ");
    scanf("%s",B);

    tam = strlen(A) + strlen(B);
    int cont1 =0;
    int cont2 =0;
    for(int i = 0; i <= tam; i++){
        if(i % 2 == 0){
            C[i] = A[cont1];
            cont1++;
        }else{
            C[i] = B[cont2];
            cont2++;
        }
    }
    printf("%s\n\n", C);

return 0;
}
