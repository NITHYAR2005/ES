#include<stdio.h>
int main(){
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    if(num>0)
    {
        printf("It is a positive number\n");
        if(num%2==0)
        {
            printf("The number is even\n");
        }
        else{
            printf("The number is odd\n");
        }
    }
     if(num<0)
    {
         printf("It is a Negative number\n");

         if(num%5==0)
         {
            printf("The number is divisible by 5\n");
         }
         else{
            printf("The number is not  divisible by 5\n");
         }

    }
else{
        printf("the number is 0");
    }
return 0;
}