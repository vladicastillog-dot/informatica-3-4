#include <stdio.h>

int main(void){
    int item;
    float price;
    int quantity;
    printf("********************************\n");
    printf("Techdraui Grocery Store \n");
    printf("********************************\n");
    printf("write the item: \n");
    scanf("%d", &item );
    printf("write the price: \n");
    scanf("%.2f" , &price );
    printf("write  quantity: \n");
    scanf("%d", &quantity );


    printf("------------------------------\n");
    int total = price*quantity;
    printf("------------------------------\n");

}
