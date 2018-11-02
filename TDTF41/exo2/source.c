#include<stdio.h>

int main(){
	int n = 10;
	int somme = 0;
	printf("Entrez la valeur de n pour laquelle vous voulez calculer la somme des n premiers entiers non nuls ? :\n");
	scanf("%d", &n);

	for (int i = 0;i <= n; i++){
		somme += i;
	}

	//int i = 0;
	//while(i <= n){
	//	somme += i;
	//	i++;
	//}

	//int i = 0;
	//do{
	//	somme += i;
	//	i++;
	//}while(i <= n);

	printf("La somme des %d premiers entiers positifs est égale à %d\n",n , somme);
	return(0);
}

