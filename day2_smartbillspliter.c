#include<stdio.h>
int main()
{
    float mealcost,totalbill,person1_share,person2_share,person3_share;
    float tax=0.05,tip=0.1;
    printf("enter the mealcost");
    scanf("%f",&mealcost);
    totalbill = mealcost+(mealcost*tax)+(mealcost*tip);
    printf("totalbill is %f\n",totalbill);
    person1_share = totalbill/2;
    person2_share = totalbill/2;
    person3_share = 0;
    printf("each person should pay according to above conditions:\n");
    printf("person1_share is %f\n",person1_share);
    printf("person2_share is %f\n",person2_share);
    printf("person3_share is %f\n",person3_share);
    return 0;
}