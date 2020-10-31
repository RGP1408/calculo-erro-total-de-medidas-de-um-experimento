#Montagem do algoritmo(não concluido)<br>

/*programa que calcula o erro total de uma sequencia de medidas*/
#include<stdio.h>
#include<math.h>
int main(void) {
  int n,i;
  printf("Digite a quantidade de medidas que foram realizadas\n");
  scanf("%d", &n);
  double x[n],desviomedio[n],soma=0,somadesviomedio=0,desvioquadratico[n],media,mediaquadratica;
  printf("\nDigite as medidas:\n");
  for (i = 1; i < n+1; i++) {
    scanf("%lf", &x[i]);
    soma+=x[i];
  }
  printf("\n");
  for (i = 1; i < n+1; i++) {
    printf("Medida [%d] = %.2lf\n", i, x[i]);
  }
  media = soma/n;
  printf("\nA media das medidas eh:\n%.2lf\n",media);
  printf("\nCalculo desvio de cada media:\n");
  for (i = 1; i < n+1; i++) {
        desviomedio[i] = x[i] - media;
        printf("medida [%i] = %.2lf\n",i,desviomedio[i]);
    }
   printf("\nDesvio quadratico de cada medida:\n");
   for(i = 1; i < n+1; i++) {
    desvioquadratico[i] = pow(desviomedio[i],2);
    somadesviomedio += desvioquadratico[i];
   printf("medida [%d] = %lf\n", i,desvioquadratico[i]);
   }
   mediaquadratica = somadesviomedio/n;
   printf("\nMedia desvio quadratico:\n%lf",mediaquadratica);
   printf("\nErro estatico:\n%lf\n",sqrt(mediaquadratica));

  return 0;
}
