#include<stdio.h>

int inteiroResto(int num1, int num2, int *result, int *divi){
  
  if(num1 > num2){
    *result = num1 / num2;
    *divi = num1 % num2;
  }
  else{
    *result = num2 / num1;
    *divi = num2 % num1;
  }
}

int main(){

  int num1, num2, result, divi;

  printf("Digite dois numeros: ");
  scanf("%d %d",&num1, &num2);
  inteiroResto(num1, num2, &result, &divi);
  printf("Resultado divisao: %d\nResto divisao: %d \n", result, divi);

  return 0;
}