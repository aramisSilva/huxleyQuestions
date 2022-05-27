#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int i, x, array[10], aux;

	for(i=0; i < 10; i++){
		printf("Digite um numero para o indice %d do vetor array:\n", i);
		scanf("%d", &array[i]);
	}

	for (i=0; i < 10; i++)
	{
		for(x =(i+1); i < 10; i++)
		{
			//i = 20; x = 10; aux;
			if(array[i] > array[x])
			{
				aux = array[i]; //aux == 20
				array[i]= array[x]; //i == 10
				array[x] = aux; //x = 20

			}
		}
	}
	
	for(i=0; i < 10; i++)
	{
		printf("\nNo valor da posicao %d agora eh %d ",i,  array[i]);

	}

	return 0;
	}

	





























// int i, x, aux, array[3];

	// for(i=0; i < 3; i++){
	// 	printf("Digite um valor para o indice %d", i);
	// 	scanf("%d", &array[i]);
	// }

	// for(i = 0; i < 3; i++){

	// 	for(x=i+1; i < 3; i++){

	// 		if(v[i] > v[x]){
	// 			aux = v[i];
				
	// 		}
	// 	}
	// }
