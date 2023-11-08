#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int lista[7];
	int a, b, c;

	printf("coloque 7 numeros para a lista:\n");
	for( a=0 ; a<7; a++){
	scanf("%d", &lista[a]);
	}
	
for(a = 0; a < 7 - 1; a++){
	for(b = 0; b < 7 - a - 1; b++){
		if(lista[a] > lista [a + 1]) {
			c = lista[a];
			lista [a] = lista[a + 1];
			lista [a + 1] = c;
		}
	}
}
printf("\nordem crescente:\n");
for(a=0; a < 7; a++){
	printf("\nValor: %d: %d", a + 1, lista[a]);

}
}
