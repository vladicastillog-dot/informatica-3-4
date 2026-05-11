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
    }else if(iser_response == 4){
        Res();

    }else {
        printf("invalid option \n");

    }

}
void Sum(void){
    float Sum;
    printf("Enter the number: ");
    scanf("%f", &Sum);
    

}



