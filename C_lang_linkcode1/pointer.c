#include<stdio.h>
int main()
{

    int a=10;
    int *ptr1;
    //int **ptr2=&ptr1;         //POINTER-TO-POINTER concept
    //similarly, if we want to point to a second pointer, we will need to take third pointer as ***ptr3.
    int b=5;
    int *ptr2;

    ptr1=&a;
    ptr2=&b;

    printf("Addition of %d and %d is : %d",*ptr1,*ptr2,*ptr1+*ptr2);

    //printf("Value of A is : %d",a);
    //printf("\nAddress of A is : %d",&a);
//
    //printf("\nValue of A using ptr1 is : %d",*ptr1);
    //printf("\nAddress of A using ptr1 is : %d",ptr1);
    //printf("\nAddress of ptr1 is : %d",&ptr1);
//
    //printf("\nValue of A using ptr2 is : %d",**ptr2);
    //printf("\nAddress of A using ptr2 is : %d",*ptr2);
    //printf("\nAddress of ptr1 using ptr2 is : %d",ptr2);
    //printf("\nAddress of ptr2 is : %d",&ptr2);

    return 0;
}