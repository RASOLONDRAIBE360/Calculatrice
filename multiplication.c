#include <stdio.h>

int main() {
	
	double var1, var2, resultat;
	printf("Entrez la valeur 1 : \n ");
	scanf("%lf", &var1);
	printf("Entrez la valeur 2 : \n ");
        scanf("%lf", &var2);
	resultat = var1 * var2 ;
	printf("%.2lf * %.2lf = %.2lf", var1, var2, resultat);

	return 0;
}
