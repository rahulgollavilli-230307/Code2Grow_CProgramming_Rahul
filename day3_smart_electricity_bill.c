#include<stdio.h>
int main()
{
    int unitsconsumed,totalbill;
    printf("enter total unitsconsumed");
    scanf("%d",&unitsconsumed);
    if(unitsconsumed<=100)
    {
        printf("rate per unit is 3.0\n");
        totalbill = unitsconsumed*3.0+50;
        printf("%d\n",totalbill);
    }
    else if(unitsconsumed>=101 && unitsconsumed<=200)
    {
       printf("rate per unit is 4.50\n");
       totalbill = unitsconsumed*4.50+50;
       printf("%d\n",totalbill); 
    }
    else if(unitsconsumed>=201 && unitsconsumed<=300)
    {
        printf("rate per unit is 6.0\n");
        totalbill = unitsconsumed*6.0+50;
        printf("%d\n",totalbill);
    }
    else
    {
        printf("rate per unit is 8.0\n");
        totalbill = unitsconsumed*8.0+50;
        printf("%d\n",totalbill);
        return 0;
    }
}