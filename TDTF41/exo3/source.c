#include<stdio.h>

int main(){
	for(int i = 3000; i >= 2000; i--){
		if(((i % 4) == 0 && (i % 100) != 0) | ((i % 400) == 0)){
			printf("%d est bissextile\n", i);
		}
	}
	return(0);
}

