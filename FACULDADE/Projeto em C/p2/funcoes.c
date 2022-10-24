#include <stdio.h>

// Lista de Funções!
/*
float CtoF(float x,char opc)
{
    float c,f,temp;
    
     if (opc == '1')
     {
        c = x;
        temp = c*9/5 + 32;
        printf("%f",temp);
        return temp;
     }

    else if(opc == '2')
    {
        f = x;
        temp = (f-32)*5/9;
        printf("%f",temp);
        return temp;
    }
    else if(opc != '1'&&opc != '2')
    {
        printf("\nInsira a opc entre (1) pra C to F & (2) para F to C : ");
        scanf("%c",&opc);
    }

    return printf("%f",temp);
}
int main()
{
    float x;
    char opc;
    printf("\nInsira a opc entre (1) pra C to F & (2) para F to C : ");
    scanf("%c",&opc);

    printf("\nInsira a temp que quiser:  ");
    scanf("%f",&x);
    CtoF(x,opc);
}
*/
/*
int numPrimo(int num)
{
    int resultado=0;
    for (int i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
        resultado++;
        }
    }
    if (resultado == 0)
    printf("1 = Primo");
    else
    printf("0 = N Primo");
}

int main ()
{
    int num;
    printf("\nInsira um num: ");
    scanf("%d",&num);
    numPrimo(num);
}
*/
/*
int mdc(int num1, int num2)
{
    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return printf("%d",num1);
}
int mmc(int num1, int num2){

    int resto, a, b;

    a = num1;
    b = num2;

    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return printf("%d",( num1 * num2) / a);
}
int main()
{
    mdc(3,6);
    mmc(3,6);
}
*/

