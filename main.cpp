#include <iostream>

using namespace std;

float menu, cantidad, dolar = 16.8, euro = 18;

bool mostrarMenu(){
    printf("Lorem Ipsum Dolor sit\n\n");
    printf("[1]Peso a Dolar \n [2] Dolar a Peso \n [3]Euro a Peso \n\n");
    printf("[0]Pa salir papu \n\n");
    printf("Lorem Ipsum Dolor sit\n\n");

    scanf("%f", &menu);
    if(menu == 1 || menu == 2 || menu == 3){ return true; }
    else if(menu == 0) { return false; }
    else{
        printf("VALOR INVALIDO blahblahblah intente de nuevo \n\n");
        scanf("%f", &menu);
        return true;
    }
}

float operacion(int tipoCambio, float cantidadACamibar){
    if(tipoCambio==1)      return cantidadACamibar/dolar;
    else if(tipoCambio==2) return cantidadACamibar*dolar;
    else if(tipoCambio==3) return cantidadACamibar*euro;
}

int main() {
    while(mostrarMenu()){
        printf("CANTIDAD A CONVERTIR: \n\n");
        scanf("%f", &cantidad);
        //VALIDA QUE NO SEA MENOR A 0 papu
        if(menu==1)
            printf("LA CANTIDAD DE PESOS SON: %.2f, CONVERTIDOS A DOLAR SON: %2f,", cantidad, operacion(1,cantidad));
        else if(menu==2)
            printf("LA CANTIDAD DE DOLARES SON: %.2f, CONVERTIDOS A PESO SON: %2f,", cantidad, operacion(2,cantidad));
        else if(menu==3)
            printf("LA CANTIDAD DE EUROS SON: %.2f, CONVERTIDOS A PESO SON: %2f,", cantidad, operacion(3,cantidad));
    }
    printf("BYE");
    return 0;
}

