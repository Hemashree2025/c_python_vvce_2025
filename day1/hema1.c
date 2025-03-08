#include<stdio.h>
int main()
{
    int input;
    printf("enter the input");
    scanf("%d",&input);
    if(input==0)
    {
        printf("the time estimate:0 minutes");
    }
    else if(input>0 && input<=2000)
    {
        printf("the time estimate:25 minutes");
    }
    else if(input>2001 && input<=4000)
    {
        printf("the time estimate:35 minutes");
    }
    else if(input>4001 && input<=7000)
    {
        printf("the time estimate:35 minutes");
    }
    else if(input>7000)
    {
        printf("over load");
    }
    else
    {
        printf("invaild input");
    }
    return 0;
}
