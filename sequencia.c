
#include <stdio.h>

int main() {
  long int a,b,c;
  int n,cont;
  double r;

  printf("Digite um numero\n");
  scanf("%d",&n);

    a = 0;
    b = 1;

    while(b < n) {
      c = a + b;
      a = b;
      b = c;
  }
  if(n==b)
  {
    printf("\nO numero pertence a sequecia");
  }
  else
    printf("\nO numero nao pertence a sequencia");

  return(0);
}
