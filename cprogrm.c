#include<stdio.h>
int main()
{
    int mark1,mark2,mark3,mark4,mark5;
    printf("Enter your tamil mark:");
    scanf("%d",&mark1);
    printf("Enter your english mark:");
    scanf("%d",&mark2);
    printf("Enter your Mathematics mark:");
    scanf("%d",&mark3);
printf("Enter your Economics mark:");
    scanf("%d",&mark4);
    printf("Enter your History mark:");
    scanf("%d",&mark5);
    int total=( (mark1+mark2+mark3+mark4+mark5)/5);
    if(total>=90){
        printf("you scored A grade ");
        }
        elseif(total>=80&&<90)
    {
         printf("you scored B grade ");
    }
         elseif(total>=70&&<80)
         {
            printf("you scored C grade ");
         }
    else()
    {
        printf("you scored D grade ");
    }
    
    return 0;
}

