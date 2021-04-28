#include <stdio.h>
#include <stdio.h>

int main() {
    char str1[50], str2;
    
    puts("\n\nPrograma de pesquisa de palavras");
    printf("\n\nDigite a Frase : ");
    fflush(stdin);
    fgets(str1, sizeof(str1), stdin);

    printf("\nDigite a palavra : ");
    fflush(stdin);
    scanf("%c", &str2);

    int cont = 0;

    for (int i = 0; str1[i] != '\0'; ++i) {
        if (str2== str1[i])
            ++cont;
    }

    printf("\nEssa palavra Aparece  %d  vezes.\n", cont);
    return 0;
}
