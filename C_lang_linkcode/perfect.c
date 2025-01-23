#include<stdio.h>
int main(){

    int sum=0,n,i;

    printf("Enter a Number : ");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("Given Number is a Perfect Number");
    }
    else{
        printf("Given Number is Not a Perfect Numnber");
    }
    return 0;
}