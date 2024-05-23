#include <stdio.h>
int Addition(int var1, int var2)
{
	int sum = var1 + var2;
	return sum;
}

int main ()
{

	int var1;
	int var2;
	printf ("Veuillez inserer deux valeurs:");
	scanf ("%d %d",&var1, &var2);
	int somme = Addition(var1, var2);
	printf ("%d", somme);
} 
