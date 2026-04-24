  #include <stdio.h>

  int main(void){
    //Create variables for first snack (tacos de asada)
    float price1 = 16.99;
    int quantaty = 6;
    char code1 = 'K';
    // Create variables for second snack (Rib-eye)
    float price2 = 161.10;
    int quantaty2 = 10;
    char code2 = 'A';
    // Create variable for third snack (quesabirria)
    float price3 = 120.99;
    int quantaty3 = 50;
    char code3 = 'X';

    printf("Vending Machine Stock \n");// Is the tittle
    printf("------------------------------------------------------\n");
printf("Item name: tacos de asada\n Price: %.2f \n quantaty %d \n Machine code: %c \n", price1, quantaty, code1);
printf("\n");

     printf("Item name: Rib-eye\n Price: %.2f \n quantaty %d \n Machine code: %c \n", price2, quantaty2, code2);
printf("\n");
printf("Item name: quesabirria\n Price: %.2f \n quantaty %d \n Machine code: %c \n", price3, quantaty3, code3);
  }
