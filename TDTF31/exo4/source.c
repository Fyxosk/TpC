#include<stdio.h>

int main(){
	int ab, ac, bc;
	printf("Veuillez entrer AB : ");
	scanf("%d", &ab);
	printf("Veuillez entrer AC : ");
	scanf("%d", &ac);
	printf("Veuillez entrer BC : ");
	scanf("%d", &bc);

	if ((ab < ac + bc) && (ac < ab + bc) && (bc < ab + ac)){
		printf("Le triangle existe.\n");
	}else{
		printf("Le triangle n'existe pas.\n");
	}

	return(0);
}

