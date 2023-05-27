#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define typeof(var) _Generic( (var),\
char: "Char",\
int: "Integer",\
float: "Float",\
char *: "String",\
void *: "Pointer",\
default: "Undefined")

int main(void){
    int magic;
    int guess;
    int contador = 0;

    srand(time(NULL));

    magic = rand() % 100;

    for (int i = 0; i < 6; i++){
        printf("Qual número você acha que é?\n");
	scanf("%d", &guess);

	if (guess == magic){
            printf("Você Acertou!\nFim de jogo!\n");	
	    break;
	}
	else{
	    if(guess < magic){
	        printf("Baixo!\n"); 
	    }
	    else{
	        printf("Alto!\n");
	    }
	}
	contador++;
    }
    if (contador == 6){
        printf("Infelizmente você perdeu!\n");
	printf("O número correto era: %d\n", magic);
    }

    return 0;
}

