#include<stdio.h>
void add();
int sub();
int main()
{
    printf("main function\n");
    add();
    int res=sub();
    printf("sub is :%d\n",res);
    }
    void add()
    {
        printf("prajwal huccha :%d\n",(200+300));

    }
    int sub()
    {
        return 300-200;

    }