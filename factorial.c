#include<stdio.h>
int main(){

    int fact=1,i,n;

    printf("Enter a Number : ");
    scanf("%d",&n);

    i=2;
    while(i<=n){
        fact=fact*i;//OR use fact*=i;
        i++;
    }

    printf("\nThe factorial of %d is : %d",n,fact);

    return 0;
}