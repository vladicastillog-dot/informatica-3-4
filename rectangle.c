#include <stdio.h>

int main(void)
{
    int lenght ;
    int width ;
    printf("Write the lenght: \n");
 scanf("%d", &lenght );
 printf("Write the width : \n");
 scanf("%d" , &width  );
 int variable = lenght*width;
 int  kinish = 2*(lenght+width);
 printf("Area: %d \n", variable);
 printf ("perimetro: %d \n", kinish);
}
