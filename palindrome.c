#include<stdio.h>
int main(){

    int n,temp,rev=0;

    printf("Enter a Number : ");
    scanf("%d",&n);

    temp=n;

    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }

    if(temp==rev){
        printf("\nThe Number is Palindrome");
    }
    else{
        printf("\nThe Number is Not Palindrome");
    }
    return 0;
}