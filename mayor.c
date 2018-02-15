#include <stdio.h>

int main ()
{
	int num,n,mayor,i;
	printf("Buen dia, bienvenido al programa que calcula al valor mayor positivo.\n");

	do {
		printf ("\nNo. de valores: ");
		scanf ("%d",&n);
	} while (n <= 0);
	
	mayor= 0;
	
	for (i= 1; i <= n; i++) {

		do {
			printf ("Valor: ");
			scanf ("%d", &num);

			if (num <= 0){
				printf("Error, por favor escribe numeros positivos.\n");
			}

		} while ( num <= 0 );

		if (num > mayor) mayor = num;
	}

	printf ("El num. mayor es: %d\n", mayor);
}
