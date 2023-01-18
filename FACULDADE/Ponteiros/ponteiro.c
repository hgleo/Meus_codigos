#include <stdio.h>

//void troca(int *px, int *py)
//{
//
//int t;
//t = *px; // t recebe o conteúdo de x
//*px = *py; // x recebe o conteúdo de y
//*py = t; // y recebe o conteúdo de x
//
//}
//
//void main()
//{
//
//int x, y;
//printf ("Informe as coordenadas:");
//scanf("%d %d",&x, &y);
//printf("Antes da troca - X: %d Y: %d \n", x, y);
//troca(&x, &y);
//printf("Depois da troca - X: %d Y: %d \n", x, y); 
//
//
//int *p1,**p2,***p3, var; //variável int e ponteiros para a variável int
//var = 97;
//p1 = &var;  //ponteiro 1 recebe o endereço de var
//p2 = &p1;   //ponteiro 2 recebe o endereço de ponteiro 1
//p3 = &p2;   //ponteiro 3 recebe o endereço de ponteiro 2
//printf("\nEndereço da Var %p", &var);
//printf("\nEndereço do ponteiro 1: %p",&p1);
//printf("\nEndereço do ponteiro 2: %p",&p2);
//printf("\nEndereço do ponteiro 3: %p",&p3);
//printf("\nEndereço apontado pelo ponteiro 1: %p",p1);
//printf("\nEndereço apontado pelo ponteiro 2: %p",p2);
//printf("\nEndereço apontado pelo ponteiro 3: %p",p3);
//printf("\nConteúdo de Var:%d",var);
//printf("\nConteúdo de Var pelo ponteiro 1:%d",*p1);
//printf("\nConteúdo de Var pelo ponteiro 2:%d",**p2);
//printf("\nConteúdo de Var pelo ponteiro 3:%d",***p3);

//int *p1, var;
//var = 65;
//p1 = &var;
//printf("\nEndereço da Var %p", &var);
//printf("\nEndereço apontado pelo ponteiro 1: %p",p1);
//p1++;
//printf("\n ( p + 1): %p",p1);
//p1--;
//printf("\n ( p -1 ): %p",p1);
//printf("\nConteúdo de Var pelo ponteiro 1:%d \n",*p1);

//int i;
//int *p0 = &i;
//int *p1 = &i + 1;
//int *p2 = &i + 2;
//int *p3 = p2;
//printf("p2 > p0: %d\n", p2 > p0);
//printf("p0 > p1: %d\n", p0 > p1);
//printf("p2 < p0: %d\n", p2 < p0);
//printf("p3 = p2: %d\n", p3 == p2);
//return 0;

//**********************  Recursividade

//int fat_rec(int i) {
//	if (i==0)
//	    	return(1);
//	else
//	   	return (i * fat_rec (i-1)); 
//}
//
//void main()  {
//	int n, f;
//	printf ("\n Digite um número inteiro:");
//	scanf("%d",&n);
//	if (n<=0) 
//		f = 1;
//	else 
//		f=fat_rec(n);
//	printf ("Fatorial de %d é %d", n, f);
//}
//

//********************* MDC recursiva
#include <stdio.h>
int mdc (int x, int y) {
int r =x%y;
if (r==0)
    return y;
else
    return mdc(y, r);
}
void main (void){
   printf("MDC: %d",mdc(24,6));
}