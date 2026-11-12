#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int m1, m2, m3, m4, m5, total;
    float average;
    char name[30];

    
    if (argc != 7)
    {
        printf("Usage: ./a.out Name M1 M2 M3 M4 M5\n");
        printf("Example: ./a.out Tawfiq 80 75 90 85 88\n");
        return 1;
    }

    
    if (strlen(argv[1]) >= sizeof(name))
    {
        printf("Student name is too long. Maximum 29 characters.\n");
        return 1;
    }

    strcpy(name, argv[1]);


    m1 = atoi(argv[2]);
    m2 = atoi(argv[3]);
    m3 = atoi(argv[4]);
    m4 = atoi(argv[5]);
    m5 = atoi(argv[6]);

    
    if (m1 < 0 || m1 > 100 ||
        m2 < 0 || m2 > 100 ||
        m3 < 0 || m3 > 100 ||
        m4 < 0 || m4 > 100 ||
        m5 < 0 || m5 > 100)
    {
        printf("Invalid marks. Enter marks between 0 and 100.\n");
        return 1;
    }

   
    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0f;

    
    printf("\n========== STUDENT REPORT ==========\n");
    printf("Student Name : %s\n", name);
    printf("------------------------------------\n");
    printf("Mark 1       : %d\n", m1);
    printf("Mark 2       : %d\n", m2);
    printf("Mark 3       : %d\n", m3);
    printf("Mark 4       : %d\n", m4);
    printf("Mark 5       : %d\n", m5);
    printf("------------------------------------\n");
    printf("Total Marks  : %d / 500\n", total);
    printf("Average      : %.2f\n", average);

    if (average >= 90)
        printf("Grade        : A+\n");
    else if (average >= 80)
        printf("Grade        : A\n");
    else if (average >= 70)
        printf("Grade        : B\n");
    else if (average >= 60)
        printf("Grade        : C\n");
    else if (average >= 40)
        printf("Grade        : D\n");
    else
        printf("Grade        : F\n");

    printf("====================================\n");

    return 0;
}
