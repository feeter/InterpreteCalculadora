#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


#define key "Ingrese la operacion que quiere hacer: "



int *obtenerNumeros(char ingreso[]);
void suma();
void resta();
void multiplicar();
void dividir();

int numeros[2];

int main() {
    int x = 1;
    char ingreso[100];

    while(x)
    {
        int i=0;


        printf("%s", key);
        scanf("%s", ingreso);

        printf("el usuario ingreso: %s \n", ingreso);

        obtenerNumeros(ingreso);

        switch('+')
        {
            case '+': suma();
                break;
        }
    }


    return 0;
}

int *obtenerNumeros(char ingreso[])
{
    int i = 0;

    char *p  = strtok(ingreso, "+");

    if (p == NULL) {
        printf("No hay valores, o cadena incorrecta");
        return -1;
    }
    numeros[i++] = atoi(p);

    while (p != NULL)
    {
        p = strtok(NULL, "+");
        if (p != NULL) {
            numeros[i++] = atoi(p);
        }
    }

    //printf("valor 1: %d ", numeros[0]);
    //printf("valor 2: %d \n", numeros[1]);

    return numeros;
}

void suma()
{
    int sum = 0;


    for (int i = 0; i < 2; ++i) {
        sum += numeros[i];
    }

    printf("suma total= %d\n", sum);
}

