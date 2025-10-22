#include<stdio.h>
int main()
{
    float basic_salary,gross_salary,netmonthly_salary,har_percentage,da_percentage,tax_percentage;
    int har,da,tax,ans;
    printf("enter basic salary:");
    scanf("%f",&basic_salary);
    printf("enter har percentage:\n");
    scanf("%f",&har_percentage);
    printf("enter da percentage:\n");
    scanf("%f",&da_percentage);
    printf("enter tax percentage:\n");
    scanf("%f",&tax_percentage);
    har = basic_salary * (har_percentage/100);
    da = basic_salary * (da_percentage/100);
    tax = basic_salary * (tax_percentage/100);
    gross_salary = basic_salary+har+da-tax;
    printf("har is %d\n",har);
    printf("da is %d\n",da);
    printf("tax is %d\n",tax);
    printf("gross salary is %f\n",gross_salary);
    ans = (gross_salary>50000);
    printf("%d\n",ans);
    netmonthly_salary = gross_salary/12;
    printf("net monthly salary is %f",netmonthly_salary);
    return 0;
}