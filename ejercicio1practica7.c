//Janis lizeth Salgado Pérez.     ejercicio1. Este programa valida si "a" es mayor a "b"//
#include<stdio.h>

int main()
{
    int a,b;
    printf("ingrese dos números separados por coma: ");
    scanf("%d,%d", &a,&b);
    if(a>b)
    {
        printf("a es mayor a b\n");
    
    }
  printf("Fin del programa\n");
  return 0;
}


//Utilizando la versión del profesor//
#include<stdio.h>

void main()
{
    int a,b;
    printf("Dame un número: ");
    scanf("%i" ,a);
    printf("Dame otro número: ");
    scanf("%i" , b);

  if(a>b);
    {
      printf("a es mayor que b\n");
    }
  printf("Fin del programa\n");
}
