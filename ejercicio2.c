// Janis Lizeth Salgado Perez. Ejercicico . Programa que valida si un número es par o impar //
#include<stdio.h>

int main()
{ 
    int num;
    printf("Ingrese un número: ");
    scanf("%i", &num);
    if(num % 2 ==0)
    {  
        printf("El número dado es par\n");
    }
    else
    {
        printf("el numero dado es impar\n");
    }
    printf("Fin del programa\n");
    return 0;
}

//metodo profesor//
// Janis Lizeth Salgado Perez. Ejercicico . Programa que valida si un número es par o impar //
#include<stdio.h>

viod main()
{ 
    int num;
  
    printf("DAME UN NÚMERO: ");
    scanf("%i", &num);
    if(num % 2 ==0)
    {  
        printf("El número es par\n");
    }
    else
    {
        printf("el numero es impar\n");
    }
    printf("Fin del programa\n");
    return 0;
}
