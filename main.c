#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nombre1;
	int nombre2;
	int resultat;
	printf("bjr bien venu dans mon premier test sur github!\n");
	printf("entez un nombre1!!\n");
	scanf("%d", &nombre1);
	printf("entrez le nombre2!!\n");
	scanf("%d", &nombre2);
	resultat = nombre1 + nombre2;
	printf("%d + %d = %d\n",nombre1, nombre2, resultat);
	return 0;
}
