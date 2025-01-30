#include<stdio.h>
int main(){

    int a[50],i,n;
    int sum=0;

    printf("Enter Number of Elements in Array : ");
     scanf("%d",&n);

    printf("Enter the Elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    printf("\nThe Sum of the Numbers is : %d",sum);

    return 0;
}