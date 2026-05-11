#include <stdio.h>

void c_to_f(void);
void f_to_c(void);

int main(void){
    int user_response;
    printf("Temperature Converter\n");
    printf("select)
    c_to_f();


}
void c_to_f(void){
    int C;
      printf("Celsious = ");
      scanf("%d" , &C);
      float f= (C*1.8) + 32;
      printf("Celsious: %d \n" , C);
      printf("Farenheit: %f \n" , f );



}
