#include <stdio.h>
int main(void){
    int F; //Aqui el profe me dijo que le hiciera con int y inici una variable indefinida
    printf("Farenheit = "); //hace que en la parte negra aparesca Farenheit =
    scanf("%d" , &F);
    float c = (F-32)/1.8; // float me da decimales
    printf("Farenheit: %d \n" , F);
    printf("celcious: %f \n" , c ); //la temperatura para que sea igual es menos 40
}
