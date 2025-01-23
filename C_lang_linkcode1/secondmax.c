#include<stdio.h>
int main(){

    int i,n,a[20],loc,max;

    printf("Enter Size of Array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
            loc=i;
        }
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]&&loc!=i)
            max=a[i];
    }
    printf("The Second Biggest Number in the Array is %d ",max);
    
}