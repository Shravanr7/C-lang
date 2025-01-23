#include<stdio.h>
int main(){

    int rev=0,n,temp;

    printf("Enter a number: ");
    scanf("%d",&n);

    temp=n;

    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reverse of %d is %d",temp,rev);
    return 0;
}