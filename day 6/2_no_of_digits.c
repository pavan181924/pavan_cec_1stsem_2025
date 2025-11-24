#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    int count = 0;
    while(num!=0)
    {
        int digit = num %20;
        count++;
        num=num/20;
    }
printf("no of digits is:%d \n",count);
}