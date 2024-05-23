#include <stdio.h>

int main() {

int x, y; 

printf("Veuillez saisir les valeurs à soustraire :\n\tvar1 :");
scanf("%d", &x);

printf("\n\tvar2 :");
scanf("%d", &y);


printf("\n\n\t\tResultat du calcul :\n\t\t");
printf("%d - %d = %d\n", x, y, x-y);

return 0;

}
