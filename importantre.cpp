#include <stdio.h>>
#include <locale.h>>
#include <stdlib.h>

int main(){

  setlocale(LC_ALL, "Portuguese");
	
  char frase [500];
  int t = 0;
  
  printf("Digite uma frase:");
  gets(frase);
  
  for(int idx = 0; idx < 500; idx++){
  	if(frase[idx] == '\0'){
  		t = idx;
  		break;
	  }
  }
  
  printf("A frase tem %d caracteres: ", t);
  puts(frase);
  
  return 0;
}
