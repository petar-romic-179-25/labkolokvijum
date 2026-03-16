#include <stdio.h>

int main(){
	int godina;
	printf("Petar Romic \n");
	printf("179/25 \n");
	printf("Unesi godinu rodjenja: \n");
	scanf("%d", &godina);
	if(godina % 4 == 0){
		printf("Rodjen si u prestupnoj godini \n");
	} else{
		printf("Nisi rodjen u prestupnoj godini \n"); 
	}
	return 0;
}
