#include <stdio.h>

int main(){
  printf("Petar Romic \n");
  printf("179/25 \n");
  int godina;
  printf("Unesi godinu: \n");
  scanf("%d", &godina);
  if(godina % 4 == 0 || godina % 100 != 0 || (godina % 400 == 0)){
    printf("Rodjen si u prestupnoj godini");
  } else{
    printf("Nisi rodjen u prestupnoj godini");
  }
  
  return 0;
}
