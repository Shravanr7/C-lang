#include<stdio.h>
int main(){

    int i,j,a[20],n,flag;

    printf("Enter Number of Elements : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    /*for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        printf("%d ",a[i]);
    }*/

    i=0;
    flag=1;
    while(flag){
        flag=0;
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        i++;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}