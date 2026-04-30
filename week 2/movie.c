#include <stdio.h>
int main(void){

    int runningtime;
    printf("enter movie running time: ");
    scanf("%d" , &runningtime);
    int starHour;
    int startMin;
    printf("Start time: ");
    scanf("%d:%d" , &starHour, &startMin);

    int hours = runningtime / 60;
    int minutes = runningtime % 60;

    int endHour = starHour + hours;
    int  endMin = startMin + minutes;

    printf("The movie will last %dhr and %dmin\n" , hours, minutes);
 printf("End time: %d:%d", endHour, endMin);


}
