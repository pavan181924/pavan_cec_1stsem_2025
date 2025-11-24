#include<stdio.h>
int main(){
int a = 70;
int b = 80;
if(a>b){
printf("a is: %d \n",a);
}
else{
    printf("b is:%d \n",b);
}
(a>b)?printf("a is : %d \n",a):printf("b is:%d \n",b);
}