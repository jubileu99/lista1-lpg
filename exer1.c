#include <stdio.h>
#include <stdlib.h>

int main(){

  float x,y;

  printf("Informe 2 valores\n");
  scanf("%f %f",&x,&y);

  if(x > 0 && y > 0)
    printf("Q1\n");
  else if(x < 0 && y > 0)
    printf("Q2\n");
  else if(x < 0 && y < 0)
    printf("Q3\n");
  else if( x > 0 && y < 0)
    printf("Q4\n");
  else if(y != 0) // Chegou aqui, o "x" já é 0, pois as condic. anteriores provaram isso.
    printf("Eixo x na origem\n");
  else if(x != 0)
    printf("Eixo y na origem\n");
  else
      printf("Origem\n");

  return 0;
}
