#include <stdio.h>

int main(void)
{
    int a = 5; // = means assignment
    int b = 5;
    int c= 10; //we created three varables

    printf("%d == %d is %d \n", a, b, a == b);// == means comparison
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d != %d is %d \n", a, c, a != c);

    //program that identifies negative numbers
    int number;
    printf("enter a number: ");
    scanf("%d", &number);
    if (number < 0){ //to make just a tging happens if other happens too
        printf("%d is negative number. \n", number);
    }else{
        printf("%d is positive number. \n", number);
    }
    }
}
