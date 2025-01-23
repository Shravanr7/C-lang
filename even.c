#include<stdio.h>
int main(){

    int a;

    printf("Enter the Number : \n");
    scanf("%d",&a);

    /*if(a%2==0){                           //Slower Method
        printf("Number is Even");
    }
    else{
        printf("Number is ODD");
    }*/

    if(a & 1){ //Fastest Method
        printf("Number is ODD");
    }
    else{
        printf("Number is Even");
    }
    return 0;
}