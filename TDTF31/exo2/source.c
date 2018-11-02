#include<stdio.h>

int main(){
	int annee;
	printf("Veuillez insérer l'année que vous souhaitez vérifier : ");
	scanf("%d", &annee);

	if ((annee % 4 == 0 && annee % 100 != 0) | (annee % 400 == 0)){
		printf("%d est bissextile\n", annee);
	}else{
		printf("%d n'est pas bissextile\n", annee);
	}

	return(0);
}

