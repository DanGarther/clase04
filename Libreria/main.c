#include <stdio.h>
#include <stdlib.h>
int dameUnEntero(char* mensaje, int max, int cantidad, int *pNumero);


int main()
{
    int unNum;
    int sePudo;

    sePudo = dameUnEntero("Ingrese su edad: ", 100, 2, &unNum);

    if(sePudo == -1){

        printf("No se pudo cargar");
    }

    else{
        printf("Su edad : %d", unNum);
    }

// printf("Se pudo : %d\n", sePudo);


    return 0;
}

int dameUnEntero(char* mensaje, int max, int cantidad, int *pNumero){

int contador = 0;

printf("%s", mensaje);
scanf("%d", &*pNumero);

while(*pNumero > 100){

contador++;
printf("%s", mensaje);
scanf("%d", &*pNumero);
if(contador == cantidad){

    return -1;
}

}

return 0;
}
