#include<stdio.h>

int main(){
	int i, j;
	char lettre;
	printf("   0 1 2 3 4 5 6 7 8 9 A B C D E F\n");
	for (i = 0; i <= 7; i++){
		for (j = 0; j <= 16; j++){
			if(j == 0){
				printf("%x  ", i);
			}else{
				lettre = i * 16 + (j-1);
				if (lettre >= 0x20 && lettre <= 0x7E){
					printf("%c ", lettre);
				}else{
					printf("  ");
				}

				if (j == 16){
					printf("\n");
				}
			}
		}
	}
	return(0);
}
