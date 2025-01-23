#include<stdio.h>
int main(){

    int a[50],i,n;
    int max,min;

    printf("Enter Number of Elements in Array : ");
    scanf("%d",&n);

    printf("Enter the Elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    
    for(i=0;i<n;i++){
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }

    printf("\nMax is : %d\nMin is : %d",max,min);

    return 0;
}