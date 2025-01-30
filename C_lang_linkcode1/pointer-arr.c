#include<stdio.h>
int main()
{

    int arr[5]={10,20,30,40,50};
    int *ptr;

    ptr=&arr[0];

    printf("\n%d -> %u",*(ptr+0),(ptr+0));
    printf("\n%d -> %u",*(ptr+1),(ptr+1));
    printf("\n%d -> %u",*(ptr+2),(ptr+2));
    printf("\n%d -> %u",*(ptr+3),(ptr+3));
    printf("\n%d -> %u",*(ptr+4),(ptr+4));

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d -> %u",*(ptr+i),(ptr+i));
    }
    

    return 0;
}