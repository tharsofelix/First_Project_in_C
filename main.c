#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    float n1, n2, n3;
    int op, rep;
do{
    printf("---------MENU---------\n");
    printf("1.Soma\n");
     printf("2.subtra��o\n");
       printf("3.multiplica��o\n");
         printf("4.divis�o\n");
          printf("---------MENU---------\n");
          printf("Escolha uma Opera��o...\n");
     scanf("%d", &op);

switch (op)
   {
    case 1:
    printf("primeiro numero:");
        scanf("%f", &n1);
    printf("segundo numero:");
        scanf("%f", &n2);
         n3=n1+n2;
      printf("Resultado: %.2f",n3);
        break;

     case 2:
    printf("primeiro numero:");
        scanf("%f", &n1);
    printf("segundo numero:");
        scanf("%f", &n2);
              n3=n1-n2;
      printf("Resultado: %.2f",n3);
        break;

     case 3:
    printf("primeiro numero:");
        scanf("%f", &n1);
    printf("segundo numero:");
        scanf("%f", &n2);
              n3=n1*n2;
      printf("Resultado: %.2f",n3);
        break;

     case 4:
    printf("primeiro numero:");
        scanf("%f", &n1);
    printf("segundo numero:");
        scanf("%f", &n2);
              n3=n1/n2;
     printf("Resultado: %.2f",n3);
        break;

     default:
     printf("Opera��o invalida.");
        break;
   }
    printf("\nDeseja voltar ao menu? \n 1-SIM \t\tOU\t 2-N�O\n\t\t");
 scanf("%d", &rep);

   }
while( rep==1 );

 system("pause");


    return 0;
}
