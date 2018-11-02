#include<stdio.h>
#include<math.h>

int main(){
	int a, b, c, delta;
	float x1, x2;
	printf("Veuillez entrer a, b, c dans l'équation ax²+bx+c\n");
	printf("a : ");
	scanf("%d", &a);
	printf("b : ");
	scanf("%d", &b);
	printf("c : ");
	scanf("%d", &c);
	delta = b * b - (4 * a * c);
	printf("Delta = %d\n", delta);
	if (delta > 0){
		x1 = (-b - sqrt(delta)) / (2 * a);
		x2 = (-b + sqrt(delta)) / (2 * a);
		printf("Delta > 0, deux solutions : \n");
		printf("x1 = %f\nx2 = %f\n", x1, x2);
	}else if (delta == 0){
		x1 = -b / (2 * a);
		printf("Delta = 0, une solution : \n");
		printf("x = %f\n", x1);
	}else{
		printf("Delta < 0, aucune solution réelle\n");
	}
	return(0);
}

