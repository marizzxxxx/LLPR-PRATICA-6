#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    char frase[500];
    int i, cont = 0;

    printf("Insira uma frase: ");
    for (i = 0; i < 100; i++) {
        frase[i] = getchar();
        if (frase[i] == '\n') {
            break;
        }
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ||
            frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
            cont++;
        }
    }

    printf("A quantidade de vogais na frase é: %d\n", cont);
    return 0;
}
