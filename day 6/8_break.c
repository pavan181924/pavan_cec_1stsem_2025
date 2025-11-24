#include<stdio.h>
int main()
{
    for(int i = 1;i<=10;i++)
    {
        if(i==10)
        {
            break;
        }
        if(i==5)
        {
        continue;
        }

    
    printf("%d\n",i);
    }

}