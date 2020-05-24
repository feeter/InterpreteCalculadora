#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


#define key "Ingrese la operacion que quiere hacer: "


void obtenerOperacion(char ingreso[]);
void obtenerNumeros(char ingreso[]);
void suma();
void resta();
void multiplicar();
void dividir();

int numeros[2];
char operacion;

int main() {
    int x = 1;
    char *ingreso;

    while(x)
    {
        int i=0;


        printf("%s", key);
        scanf("%s", ingreso);

        obtenerOperacion(ingreso);

        //printf("el usuario ingreso: %s \n", ingreso);

        obtenerNumeros(ingreso);

        switch(operacion)
        {
            case '+': suma();
                break;
        }

        operacion = ' ';
    }


    return 0;
}

void obtenerOperacion(char ingreso[])
{
    char *esSuma = strchr(ingreso, '+');
    char *esResta = strchr(ingreso, '-');
    char *esMultiplicacion = strchr(ingreso, '*');
    char *esDivision = strchr(ingreso, '/');

    if (esSuma != NULL)
    {
        operacion = '+';
    }

    if (esResta != NULL)
    {
        operacion = '-';
    }

    if (esMultiplicacion != NULL)
    {
        operacion = '*';
    }

    if (esDivision != NULL)
    {
        operacion = '/';
    }
}

void obtenerNumeros(char ingreso[])
{
    int i = 0;

    char *p  = strtok(ingreso, "+");

    if (p == NULL) {
        printf("No hay valores, o cadena incorrecta");
        exit(-1);
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

}

void suma()
{
    int sum = 0;


    for (int i = 0; i < 2; ++i) {
        sum += numeros[i];
    }

    printf("suma total= %d\n", sum);
}

