#include<stdio.h>

int main()
{
    int num,sum=0,duplicate,reverse,digit;
    printf("enter a number:");
    scanf("%d",&num);
    duplicate = num;
    while(num!=0)
    {
        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    if(duplicate==reverse)
    {
     printf("the number is pallindrome \n");
    }
    else{
        printf("the number is not pallindrome \n");
   }


}