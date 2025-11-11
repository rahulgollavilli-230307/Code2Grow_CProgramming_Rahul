#include <stdio.h>

int main() 
{
    int marks[10];                  
    int n, i;                       
    int total = 0;                  
    float average;                 
    int highest, lowest;            
    int pass_count = 0, fail_count = 0; 
    int grade_ap = 0;  
    int grade_a = 0;   
    int grade_b = 0;   
    int grade_c = 0;
    int grade_d = 0;   
    int grade_f = 0;   

    printf(" Student Performance Analyzer:\n");
    printf("total number of students (max 10): ");
    scanf("%d",&n);
    if (n <= 0 || n > 10)
     {
        printf("Invalid number of students. Please enter between 1 and 10.\n");
        return 1;
    }
    printf("Enter marks for each student:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks. Please enter a value between 0 and 100.\n");
            return 1;
        }
        total += marks[i];
        if (marks[i] >= 90)
         {
            grade_ap++;
            pass_count++;
        } 
        else if (marks[i] >= 80)
         {
            grade_a++;
            pass_count++;
        }
         else if (marks[i] >= 70) 
         {
            grade_b++;
            pass_count++;
        } 
        else if (marks[i] >= 60) 
        {
            grade_c++;
            pass_count++;
        } 
        else if (marks[i] >= 50) 
        {
            grade_d++;
            pass_count++;
        }
         else 
         {
            grade_f++;
            fail_count++;
        }
    }
    highest = lowest = marks[0];
    for (i = 1; i < n; i++)
     {
        if (marks[i] > highest)
            highest = marks[i];
        if (marks[i] < lowest)
            lowest = marks[i];
    }
    average = (float) total / n;
    printf("Result Summary:\n");
    printf("Average Marks: %.2f\n", average);
    printf("Highest Marks: %d\n", highest);
    printf("Lowest Marks: %d\n", lowest);
    printf("Total Passed Students: %d\n", pass_count);
    printf("Total Failed Students: %d\n", fail_count);
    printf("Grade Distribution:\n");
    printf("A+ : %d\n", grade_ap);
    printf("A  : %d\n", grade_a);
    printf("B  : %d\n", grade_b);
    printf("C  : %d\n", grade_c);
    printf("D  : %d\n", grade_d);
    printf("Fail: %d\n", grade_f);
    printf("==================================\n");
    return 0;
}
