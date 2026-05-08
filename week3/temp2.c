#include <stdio.h>

int main(void){
      int C;
      printf("Celsious = ");
      scanf("%d" , &C);
      float f= (C*1.8) + 32;
      printf("Celsious: %d \n" , C);
      printf("Farenheit: %f \n" , f );
      if(C<0){
        printf("%d ❄️ Freezing weather \n", C);
      }else if(C<=10){
        printf("%d 🥶 Very cold weather \n", C);
      }else if(C<=20){
        printf("%d 🧥 Chilly weather \n", C);
      }else if (C<30){
        printf("%d 🖼️ Normal weather\n", C);
      }else if (C<40){
        printf("%d ☀️ Hot weather \n" , C);
      }else if (C<50){
        printf("%d 🔥 Very hot weather \n" , C);
        }
}
