#include<stdio.h>
int main()
{
    int num_employees,i,j,choice;
    char student_name[50],regnum[20],section[10];
    int salaries[10];
    int total,highest,lowest,count_above,count_below;
    float average;
    int temperature;

    printf("employee salary analysis system:\n");
    printf("enter student name:");
    fgets(student_name,sizeof(student_name),stdin);
    printf("enter registration number:");
    fgets(regnum,sizeof(regnum),stdin);
    printf("enter section:");
    fgets(section,sizeof(section),stdin);

    do {
        printf("enter number of employees (up to 10):");
        scanf("%d",&num_employees);
        if(num_employees<1 || num_employees>10) {
            printf("invalid number! please enter between 1 and 10:\n");
        }
    } while(num_employees<1 || num_employees>10);

    printf("enter salaries:\n");
    for(i=0;i<num_employees;i++) {
        printf("%d: ",i+1);
        scanf("%d",&salaries[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. display all salaries\n");
        printf("2. display total and average salary\n");
        printf("3. display highest and lowest salary\n");
        printf("4. count employee above and below average\n");
        printf("5. display sorted salary (ascending)\n");
        printf("6. exit\n");
        printf("========\n");
        printf("enter your choice: ");
        scanf("%d",&choice);
        getchar();

        switch(choice) {
            case 1:
                printf("salaries:\n");
                for(i=0;i<num_employees;i++)
                    printf("%d. %d\n", i + 1, salaries[i]);
                break;

            case 2:
                total = 0;
                for(i=0;i<num_employees;i++)
                    total += salaries[i];
                average = (float)total / num_employees;
                printf("total salary: %d\n", total);
                printf("average salary: %.2f\n", average);
                break;

            case 3:
                highest = salaries[0];
                lowest = salaries[0];
                for(i=1;i<num_employees;i++) {
                    if(salaries[i] > highest) highest = salaries[i];
                    if(salaries[i] < lowest) lowest = salaries[i];
                }
                printf("highest salary = %d\n", highest);
                printf("lowest salary = %d\n", lowest);
                break;

            case 4:
                total = 0;
                for(i=0;i<num_employees;i++)
                    total += salaries[i];
                average = (float)total / num_employees;
                count_above = count_below = 0;
                for(i=0;i<num_employees;i++) {
                    if(salaries[i] > average) count_above++;
                    else if(salaries[i] < average) count_below++;
                }
                printf("employees above average salary: %d\n", count_above);
                printf("employees below average salary: %d\n", count_below);
                break;

            case 5:
                for(i=0;i<num_employees-1;i++) {
                    for(j=0;j<num_employees-i-1;j++) {
                        if(salaries[j] > salaries[j+1]) {
                            temperature = salaries[j];
                            salaries[j] = salaries[j+1];
                            salaries[j+1] = temperature;
                        }
                    }
                }
                printf("salaries sorted in ascending order:\n");
                for(i=0;i<num_employees;i++)
                    printf("%d. %d\n", i+1, salaries[i]);
                break;

            case 6:
                printf("exiting program...\n");
                break;

            default:
                printf("invalid choice! please try again.\n");
        }

        if (choice != 6) {
            printf("\nsubmitted by: %s | reg no: %s | section: %s", student_name, regnum, section);
            printf("challenge day17 - Code2Grow program\n");
        }
    } while (choice != 6);

    return 0;
}
