#include<stdio.h>
#include<math.h>
int main(){

    int n;
    float count=0,rem,result,temp;

    printf("Enter a Number : ");
    scanf("%d",&n);

    temp=n;

    while(n>0){
        count++;                    //To Calcluate The Number of Digits
        n/=10;
    }
    n=temp;

    while(n>0){
        rem=n%10;
        result+=pow(rem,count);             //To Find the Armstrong Equivalent
        n/=10;
    }
    if(result==temp){
        printf("The number is an Armstrong Number");
    }
    else{
        printf("The number is NOT an Armstrong Number");        
    }
    return 0;
}