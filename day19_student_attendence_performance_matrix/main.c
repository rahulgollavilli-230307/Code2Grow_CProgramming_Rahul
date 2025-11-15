G. Rahul
AP25110090193
#include <stdio.h>
int main()
{
    int attendance[5][5];
    int marks[5][5];
    char names[5][20];
    int i, j;
    int choice = 0;
    printf("Enter names of 5 students:\n");
    for(i = 0; i < 5; i++)
     {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }
    printf("\nEnter Attendance Matrix (1 = Present, 0 = Absent):\n");
    for(i = 0; i < 5; i++) 
    {
        printf("Row for %s:\n", names[i]);
        for(j = 0; j < 5; j++)
         {
            scanf("%d", &attendance[i][j]);
        }
    }
    printf("\nEnter Marks Matrix (0-100):\n");
    for(i = 0; i < 5; i++) 
    {
        printf("Marks for %s:\n", names[i]);
        for(j = 0; j < 5; j++) 
        {
            scanf("%d", &marks[i][j]);
        }
    }
    while(choice != 6) 
    {
        printf("\n========= MENU =========\n");
        printf("1. Display Attendance Matrix\n");
        printf("2. Display Marks Matrix\n");
        printf("3. Attendance Report\n");
        printf("4. Performance Report\n");
        printf("5. Grade Report\n");
        printf("6. Exit\n");
        printf("========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1:  
                printf("\nAttendance Matrix:\n");
                for(i = 0; i < 5; i++) 
                {
                    printf("%s:\t", names[i]);
                    for(j = 0; j < 5; j++)
                     {
                        printf("%d ", attendance[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 2:  
                printf("\nMarks Matrix:\n");
                for(i = 0; i < 5; i++)
                 {
                    printf("%s:\t", names[i]);
                    for(j = 0; j < 5; j++) 
                    {
                        printf("%d ", marks[i][j]);
                    }
                    printf("\n");
                }
                break;
            case 3:  
            {
                int totalPresent[5];
                int totalAbsent[5];
                int highest = -1, low = 100;
                int highIndex = 0, lowIndex = 0;
                printf("\n===== Attendance Report =====\n");
                for(i = 0; i < 5; i++)
                 {
                    totalPresent[i] = 0;
                    for(j = 0; j < 5; j++) 
                    {
                        totalPresent[i] += attendance[i][j];
                    }
                    totalAbsent[i] = 5 - totalPresent[i];
                    if(totalPresent[i] > highest) 
                    {
                        highest = totalPresent[i];
                        highIndex = i;
                    }
                    if(totalPresent[i] < low)
                     {
                        low = totalPresent[i];
                        lowIndex = i;
                    }
                }
                for(i = 0; i < 5; i++)
                 {
                    printf("%s → Present: %d, Absent: %d\n",
                           names[i], totalPresent[i], totalAbsent[i]);
                }
                printf("\nHighest Attendance: %s (%d days)\n", names[highIndex], highest);
                printf("Lowest Attendance: %s (%d days)\n", names[lowIndex], low);
            }
                break;
            case 4:  
            {
                int total[5];
                int average[5];
                int highest = -1, lowest = 9999;
                int highIndex = 0, lowIndex = 0;
                printf("\n===== Performance Report =====\n");
                for(i = 0; i < 5; i++)
                 {
                    total[i] = 0;
                    for(j = 0; j < 5; j++)
                     {
                        total[i] += marks[i][j];
                    }
                    average[i] = total[i] / 5;
                    if(total[i] > highest) 
                    {
                        highest = total[i];
                        highIndex = i;
                    }
                    if(total[i] < lowest)
                     {
                        lowest = total[i];
                        lowIndex = i;
                    }
                }
                for(i = 0; i < 5; i++)
                 {
                    printf("%s → Total: %d, Average: %d\n",
                           names[i], total[i], average[i]);
                }
                printf("\nClass Topper: %s (%d marks)\n", names[highIndex], highest);
                printf("Lowest Performer: %s (%d marks)\n", names[lowIndex], lowest);
            }
                break;
            case 5:  
            {
                int total, avg;
                printf("\n===== Grade Report =====\n");
                for(i = 0; i < 5; i++)
                 {
                    total = 0;
                    for(j = 0; j < 5; j++)
                     {
                        total += marks[i][j];
                    }
                    avg = total / 5;
                    if(avg >= 90) printf("%s → Average: %d, Grade: A+\n", names[i], avg);
                    else if(avg >= 80) printf("%s → Average: %d, Grade: A\n", names[i], avg);
                    else if(avg >= 70) printf("%s → Average: %d, Grade: B\n", names[i], avg);
                    else if(avg >= 60) printf("%s → Average: %d, Grade: C\n", names[i], avg);
                    else if(avg >= 50) printf("%s → Average: %d, Grade: D\n", names[i], avg);
                    else printf("%s → Average: %d, Grade: F\n", names[i], avg);
                }
            }
                break;
            case 6:
                printf("\nExiting program...\n");
                break;
            default:
                printf("\nInvalid choice. Try again.\n");
        }
    }
    return 0;
}
