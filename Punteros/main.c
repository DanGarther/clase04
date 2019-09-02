#include <stdio.h>
#include <stdlib.h>


void cambiarPorValor(int unDato);
void cambiarPorReferencia(int* unDato);


int main()
{

    int num;
    num = 22;

    cambiarPorValor(num);

    printf("numero = %d ", num);

    cambiarPorReferencia(&num);


     printf("numero = %d ", num);



    return 0;
}


void cambiarPorReferencia(int* unDato){

*unDato =34;
printf("\nDato por referencia = %d\n", *unDato);

}

void cambiarPorValor(int unDato){

    unDato=99;

    printf("\ndato = %d \n" , unDato);

}
