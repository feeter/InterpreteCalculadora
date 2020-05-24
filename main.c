#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


#define key "Ingrese la operacion que quiere hacer: "




void suma(int *numero);
void resta();
void multiplicar();
void dividir();

int main() {
    int x = 1;
    char ingreso[100];



    while(x)
    {
        int i=0;
        int numeros[2];

        printf("%s", key);
        scanf("%s", ingreso);


        printf("el usuario ingreso: %s \n", ingreso);

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

        switch('+')
        {
            case '+': suma(numeros);
                break;
        }
    }


    return 0;
}

void suma(int *numero)
{
    int size = 2, sum = 0;


    for (int i = 0; i < size; ++i) {
        sum += numero[i];
    }

    printf("suma total= %d\n", sum);
}

