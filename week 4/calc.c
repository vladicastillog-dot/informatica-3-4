#include <stdio.h>

void Sum(void);
void Mult(void);
void Div(void);
void Res(void);

int main(void){
     printf("Select your type of equation \n");
     printf("1. Sum \n");
    printf("2. Mult \n");
     printf("3. Div \n");
    printf("4. Res \n");
    printf("Enter Your option: ");
    int user_response;
    scanf("%d", &user_response);


    if(user_response == 1){
    Sum();

    }else if (user_response == 2){
        Mult();
    }else if(user_response == 3){
        Div();
    }else if(user_response == 4){
        Res();

    }else {
        printf("invalid option \n");

    }

}

void Sum(void){
    float S1;
float S2;
float S3;
      printf("ENTER FIRST NUMBER: ");
      scanf("%f" , &S1);
       printf("ENTER SECOND NUMBER: ");
       scanf("%f" , &S2);
      S3= (S1 + S2);
      printf("%.2f + %.2f = %.2f\n" , S1, S2, S3);




}
void Mult(void){
     float S1;
float S2;
float S3;
      printf("ENTER FIRST NUMBER: ");
      scanf("%f" , &S1);
       printf("ENTER SECOND NUMBER: ");
       scanf("%f" , &S2);
      S3= (S1 * S2);
      printf("%.2f + %.2f = %.2f\n" , S1, S2, S3);



}
void Div(void){
    float S1;
float S2;
float S3;
      printf("ENTER FIRST NUMBER: ");
      scanf("%f" , &S1);
       printf("ENTER SECOND NUMBER: ");
       scanf("%f" , &S2);
      S3= (S1 / S2);
      printf("%.2f + %.2f = %.2f\n" , S1, S2, S3);



}
void Res(void){
     float S1;
float S2;
float S3;
      printf("ENTER FIRST NUMBER: ");
      scanf("%f" , &S1);
       printf("ENTER SECOND NUMBER: ");
       scanf("%f" , &S2);
      S3= (S1 - S2);
      printf("%.2f + %.2f = %.2f\n" , S1, S2, S3);



}









