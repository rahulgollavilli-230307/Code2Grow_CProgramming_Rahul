#include<stdio.h>
int main()
{
    float percentage,attendence;
    char grade;
    int sub1,sub2,sub3,sub4,sub5,total_marks;
    printf("enter 5 subject marks:\n");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    total_marks = sub1+sub2+sub3+sub4+sub5;
    printf("total marks is %d\n",total_marks);
    percentage = ((float)total_marks/500)*100;
    printf("percentage is %.2f\n",percentage);
    printf("enter attendence percentage:");
    scanf("%f",&attendence);
    if(attendence<75)
    {
        printf("fail due to less attendence\n");
    }
    else if(percentage>=90)
    {
        printf("grade is %c\n",grade = 'A');
        printf("remarks = excellent\n");
    }
    else if(percentage>=80 && percentage<90)
    {
        printf("grade is %c\n",grade = 'A');
        printf("remarks = very good\n");
    }
    else if(percentage>=70 && percentage<80)
    {
        printf("grade is %c\n",grade = 'B');
        printf("remarks = good\n");
    }
    else if(percentage>=60 && percentage<70)
    {
        printf("grade is %c\n",grade = 'c');
        printf("remarks = average\n");
    }
    else if(percentage>=50 && percentage<60)
    {
        printf("grade is %c\n",grade = 'D');
        printf("remarks = pass\n");
    }
    else if(percentage>=45 && percentage<50 && attendence>=90)
    {
        printf("grant 5 grace marks\n");
    }
    else
    {
       printf("grade is %c\n",grade = 'F');
       printf("remarks = fail\n");    
    }
    return 0;
}   