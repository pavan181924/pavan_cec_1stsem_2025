#include<stdio.h>
int main()
{
    int arr[5],max,i;
    printf("enter 5 number:\n");
    for(i-0; i<5;i++)
    {
        scanf("%d",&arr[i]);

    }
    max=arr[0];
    for(i=1; i<5; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];

        }
    }
    printf("maximum value=%d\n",max);
    return 0;

}
