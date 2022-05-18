/*
  Programa para calcular o novo salário de um funcionário adicionando
  25% de aumento
*/
#include <stdio.h>

int main(){
  float salarioN,SalarioA;
  
  //Entrada dos dados
  printf("Informe o salario atual: \n");
  scanf("%f",&SalarioA );

  //Resultado
  salarioN = SalarioA * 1.25;
  printf("\n Seu novo salario: %f \n",salarioN );
  return(0);
}
