#include <stdio.h>

int main ()
{
	int num,n,mayor,i;
	
	do {
		printf ("\nNo. de valores: ");
		scanf ("%d",&n);
	} while (n <= 0);
	mayor= 0;
	for (i= 1; i <= n; i++) {
		printf ("Valor: ");
		scanf ("%d", &num);
		if (num > mayor) mayor= num;
	}
	printf ("El num. mayor es: %d\n",mayor);
}



