#include<stdio.h>
int main()
{
    int choice;
    printf("Enter the number you wish\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("have a good day ahead");
        break;
        case 2:
        printf("Success begins with a single step");
        break;
        case 3:
        printf("Dream big, work hard, stay focused");
        break;
        case 4:
        printf("Every day is a new opportunity");
        break;
        case 5:
        printf("Small steps lead to big achievements");
        break;
        case 10:
        printf("your day will completely fullfill with happiness");
        break;
        default:
        printf("Believe in yourself and the rest will follow");

    }
    return 0;
}