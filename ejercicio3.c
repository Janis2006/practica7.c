// Janis Lizeth Salgado Perez. Ejercicicio 3. Programa que valida si un número es par o impar //
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,op,res;
    a==0;
    b==0;
    res==0;
    printf("Escoge una opción\n 1-SUMA\n 2-RESTA\n 3-MULTIPLICACIÓN\n 4-DIVISIÓN\n 5-RAÍZ CUADRADA\n 6-POTENCIA\n 0-SALIDA\n");
    scanf("&i",op);
    
    switch(op!=0 && op<=4)
    {
        case 1:
        printf("Ingrese un número: ");
        scanf("%i", &a);
        printf("Ingrese otro número: ");
        scanf("%i", &b);
        res=a+b;
        scanf("%d", res);
        printf("El resultado es: %d", res);
        break;
        
      case 2:
        printf("Ingrese un número: ");
        scanf("%i", &a);
        printf("Ingrese otro número: ");
        scanf("%i",  &b);
        res=a-b;
        
        break;
        
        
        case 3:
        printf("Ingrese un número: ");
        scanf("%i", &a);
        printf("Ingrese otro número: ");
        scanf("%i", &b);
        res=a*b;
        break;
        
        case 4:
        printf("Ingrese un número: ");
        scanf("%i", &a);
        printf("Ingrese otro número: ");
        scanf("%i", &b);
        res=a/b;
        break;
        

        
    }
    return 0;
}
