#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    char frase[500];
    char c;
    int i, j, cont = 0;

    printf("Insira uma frase: ");
    scanf("%[^\n]s", frase);

    printf("Insira um caractere: ");
    scanf(" %c", &c);

    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == c) {
            cont++;
        }
    }

    printf("O caractere '%c' aparece %d vezes na frase.\n", c, cont);
    
    return 0;
}
