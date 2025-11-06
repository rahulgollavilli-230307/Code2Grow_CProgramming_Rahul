#include <stdio.h>

int main() {
    int totalStudents;
    int passed = 0, failed = 0;
    float highest = 0, lowest = 100, classTotal = 0;
    printf("Enter total number of students: ");
    scanf("%d", &totalStudents);
    for (int i = 1; i <= totalStudents; i++) {
        int m1, m2, m3, total;
        float avg;
        char grade;
        printf("\n--- Student %d ---\n", i);
        printf("Enter marks for 3 subjects (out of 100): ");
        scanf("%d %d %d", &m1, &m2, &m3);
        total = m1 + m2 + m3;
        avg = total / 3.0;
        if (avg >= 90) grade = 'A';
        else if (avg >= 80) grade = 'B';
        else if (avg >= 70) grade = 'C';
        else if (avg >= 60) grade = 'D';
        else if (avg >= 50) grade = 'E';
        else grade = 'F';
        printf("Total: %d, Average: %.2f, Grade: %c\n", total, avg, grade);
        if (grade == 'F') failed++;
        else passed++;
        if (avg > highest) highest = avg;
        if (avg < lowest) lowest = avg;
        classTotal += avg;
    }
    int choice;
    do {
        printf("\n--- MENU ---\n");
        printf("1. View Summary\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("\n--- CLASS SUMMARY ---\n");
            printf("Total Students: %d\n", totalStudents);
            printf("Passed: %d\n", passed);
            printf("Failed: %d\n", failed);
            printf("Class Average: %.2f\n", classTotal / totalStudents);
            printf("Highest Average: %.2f\n", highest);
            printf("Lowest Average: %.2f\n", lowest);
        } else if (choice != 2) {
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 2);
    printf("Thank you! Exiting...\n");
    return 0;
}
