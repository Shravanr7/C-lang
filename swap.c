#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter A and B : ");
    scanf("%d%d",&a,&b);

    c=a;
    a=b;
    b=c;
    
    //a=a+b;
    //b=a-b;
    //a=a-b;

    //a=a*b;
    //b=a/b;
    //a=a/b;

    //a=a^b;
    //b=a^b;
    //a=a^b;

    printf("The new values are: \nA : %d \nB : %d",a,b);

    return 0;

}