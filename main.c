#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3;
    int op, rep;
do{
    printf("---------MENU---------\n");
    printf("1.Soma\n");
     printf("2.subtração\n");
       printf("3.multiplicação\n");
         printf("4.divisão\n");
          printf("---------MENU---------\n");
          printf("Escolha uma Operação...\n");
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
     printf("Operação invalida.");
        break;
   }
    printf("\nDeseja voltar ao menu? \n 1-SIM \t\tOU\t 2-NÃO\n\t\t");
 scanf("%d", &rep);

   }
while( rep==1 );

 system("pause");


    return 0;
}
