#include<stdio.h>
int main(){

    int n,count=0;

    printf("Enter a Number : ");
    scanf("%d",&n);

    while(n>0){
        count++;
        n/=10;
    }

    printf("The number of digits of the number are %d",count);

    return 0;
}