#include<stdio.h>

int main(){
	int entree = 0;
	int nbentree = 0;
	int total = 0;
	float moyenne;
	printf("Veuillez entrer vos valeurs et finissez par -1 :\n");
	while(1){
		scanf("%d", &entree);
		if (entree == -1){
			break;
		}
		nbentree += 1;
		total += entree;
	}
	moyenne = (float)total/(float)nbentree;
	printf("La moyenne de vos %d valeurs est %f.\n", nbentree, moyenne);
	return(0);
}

