#include<stdio.h>
#include<stdlib.h>

// Non fonctionnel pour a = 3 b = 2 et c = 1

int main(){
	int a, b, c, t;
	printf("Veuillez entrer a : ");
	scanf("%d", &a);
	printf("Veuillez entrer b : ");
	scanf("%d", &b);
	printf("Veuillez entrer c : ");
	scanf("%d", &c);

	if (a > b){
		t = a;
		a = b;
		b = t;
	}
	if (b > c){
		t = b;
		b = c;
		c = t;
	}
	if (a > c){
		t = a;
		a = c;
		c = t;
	}
	
	printf("%d %d %d \n", a, b, c);

	return(0);
}

