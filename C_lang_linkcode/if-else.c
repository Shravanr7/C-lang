#include<stdio.h>
int main(){

    int a;

    printf("Enter a Number : \n");
    scanf("%d",&a);

    if(a>0){
        printf("Number is Positive");
    }
    else{ 
        printf("Number is Negative");
    }
    return 0;
}