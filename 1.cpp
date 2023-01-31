#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    char frase[500];
    int i, cont = 0;
    
    printf("Digite uma frase: ");
    gets(frase);
    
    for (i = 0; i < strlen(frase); i++) {
     
	    if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
	        cont++;
	    }
    }
    printf("A frase tem %d vogais\n", cont);
    return 0;
}
