#include <stdio.h>

int main()

{
int num,resto,soma = 0;

printf("Entre com um numero \n");
scanf("%d",&num);

while (num>0)
{
resto=num%10;
num=(num-resto)/10;
soma=soma+resto;
}

printf("A soma eh %d \n",soma);


return 0;
}
