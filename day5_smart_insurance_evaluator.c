#include <stdio.h>
int main()
{
    int age, health_condition;
    char gender;
    float base_premium = 0, final_premium = 0;
    printf("enter the age:");
    scanf("%d", &age);
    printf("enter gender (M/F):");
    scanf(" %c", &gender);
    printf("enter health_condition (1 for healthy, 0 for unhealthy):");
    scanf("%d", &health_condition);
    if(age < 25)
    {      
        if(health_condition == 1)
            base_premium = 5000;
        else {
            printf("not eligible for base_premium\n");
            return 0;
        }   
    } 
    else if(age >= 25 && age <= 40)
    {
        if(health_condition == 1)
            base_premium = 7000;
        else
            base_premium = 9500;
    }
    else if(age >= 41 && age <= 60)
    {
        if(health_condition == 1)
            base_premium = 10000;
        else
            base_premium = 13000;
    }
    else if(age > 60)
    {
        if(health_condition == 1)
            base_premium = 15000;
        else
        {
            printf("not eligible for premium\n");
            return 0;
        }
      }
    if(base_premium > 0 && (gender == 'F' || gender == 'f')){
        final_premium = base_premium * 0.9;
    } else {
        final_premium = base_premium;
    }
    if(base_premium > 0){
        printf("final_premium: %.2f\n", final_premium);
    }
    return 0;
}
