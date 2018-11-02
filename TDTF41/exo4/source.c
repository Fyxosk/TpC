#include <stdio.h>

int main(){
	int nban = 0;
	float montant, interet, target;
	printf("Entrez le montant de la somme que vous souhaitez placer : ");
	scanf("%f", &montant);
	printf("Entrez le taux d'intérêt ex 1,5 : ");
	scanf("%f", &interet);
	printf("Capital : %f, taux : %f\n", montant, interet);
	target = montant * 2;
	while(montant < target){
		montant = montant * (1 + (interet * 0.01));
		nban++;
		printf("an %d : %f euros\n", nban, montant);
	}
	printf("Votre capital aura doublé au bout de %d ans\n", nban);
	return(0);
}

