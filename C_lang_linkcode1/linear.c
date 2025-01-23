#include<stdio.h>
int main(){

    int i,n,key,a[20];
    int flag;

    printf("Enter Number of Elements in Array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter a Number to Search : ");
    scanf("%d",&key);

    flag=0;
    for(i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("Found !");
    }
    else
        printf("Not Found !");

    return 0;

}