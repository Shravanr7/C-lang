#include<stdio.h>
#include<math.h>
int main(){

    int n,count=0;

    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        printf("The Number is Prime Number");
    }
    else{
        printf("The Number is Not Prime Number");
    }
    return 0;
}