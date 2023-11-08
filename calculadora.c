#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero1;
	int numero2;
	int ope;
	float total;
	opcao = 1;

	while(opcao == 1) {
		printf("Digite o numero 1:\n");
		scanf("%d", &numero1);
		printf("Digite o numero 2:\n");
		scanf("%d", &numero2);
		
		switch(ope) {
			case 1:
				total = numero1 + numero2;
break;
			case 2:
total = numero1 - numero2;
break;
			case 3:
total = numero1 * numero2;
break;
			case 4:
if(numero2==0) {
	printf("Não é possivel essa divisão\n");
	total = (float)numero1 / numero2;
 break;
	case 0:
 exit(0);
 break;
}

printf("O resultado foi: %.2f\n", total);

 return 0;
}
