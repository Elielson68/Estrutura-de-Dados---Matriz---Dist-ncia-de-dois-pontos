#include <stdio.h>
int abs(int valor);
int main(void) {
  int ponto1[2];
  int ponto2[2];

  printf("Insira o valor correspondente a linha do ponto1: ");
  scanf("%d", &ponto1[0]);
  printf("Insira o valor correspondente a coluna do ponto1: ");
  scanf("%d", &ponto1[1]);

  printf("Insira o valor correspondente a linha do ponto2: ");
  scanf("%d", &ponto2[0]);
  printf("Insira o valor correspondente a coluna do ponto2: ");
  scanf("%d", &ponto2[1]);
  int sub1 =  ponto1[0] - ponto2[0];
  printf("%d\n", sub1);
  int sub2 = ponto1[1] - ponto2[1];
  printf("%d\n", sub2);
  int valor = abs(sub1) + abs(sub2);
  printf("\nA distância entre os dois pontos inseridos é dê: %d\n", valor);
  
  for (int x=0; x<10;x++){
    printf("| ");
    for (int y=0;y<10;y++){
      if((x+1)==ponto1[0] && (y+1)==ponto1[1]){
        printf(" P1");
      }
      else if ((x+1)==ponto2[0] && (y+1)==ponto2[1]){
        printf(" P2");
      }
      else{
        printf(" X ");
      }
    }
     printf(" | %d\n",(x+1));
  }
  return 0;
}
int abs(int valor){
  if (valor<0){
    valor *= -1;
  }
  return valor;
}