#include <stdio.h>

void c_to_f(void);
void f_to_c(void);

int main(void){
    printf("Temperature Converter\n");
    printf("1. Celious to Farenheit \n");
    printf("2. Farenheit to Celcious \n");
    printf("Enter Your option: ");
    int user_response;
    scanf("%d", &user_response);

    if(user_response == 1){
    c_to_f();

    }else if (user_response == 2){
        f_to_c();
    }else {
        printf("invalid option \n");

    }



}
void c_to_f(void){
    int C;
      printf("Celsious = ");
      scanf("%d" , &C);
      float f= (C*1.8) + 32;
      printf("Celsious: %d \n" , C);
      printf("Farenheit: %f \n" , f );



}

void f_to_c(void){
    float f;
    printf("Enter the temperature in Farenheit: ");
    scanf("%f" , &f);
    float c = (f - 32) / 1.8;
    printf("%.2f°C= %.2f°F \n", f, c);
}
