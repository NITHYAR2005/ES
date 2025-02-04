#include <stdio.h>
int main()
{
    char Name[20];
    int number;
    float mark;
    char grade;

    printf("Enter your Name: ");
    scanf("%s", Name);

    printf("Enter your number: ");
    scanf("%d", &number);

    printf("Enter your mark: ");
    scanf("%f", &mark);

    printf("Enter your Grade: ");
    scanf(" %c", &grade);  // Note the space before %c

    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", Name);
    printf("Roll Number: %d\n", number);
    printf("Mark: %.2f\n", mark);
    printf("GRADE: %c\n", grade);

    return 0;
}
