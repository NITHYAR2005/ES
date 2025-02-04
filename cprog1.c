#include<stdio.h>
int main(){
    int age;
    printf("Enetr your age:");
    scanf("%d",&age);
    if(age==18){
        printf("you get 20% discount:");
    }
    else if (age<12)
    {
        printf("you get 50% discount:");
    }
    else if(age>=12&&age<18){
        printf("you are a teenager:");
    }
    else if(age>=60)
    {
        printf("you get 30% discount:");
    }
    else if(age>18&&age<60)
        {
printf("you get 10% discount:");
    }
    else
    {
        printf("you get no discount:");
    }
    return 0;
}