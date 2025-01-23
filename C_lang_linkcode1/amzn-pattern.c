#include<stdio.h>
int main(){

    int i,a[20],n,j,b[20],l;

    printf("Enter Number of Elements in Array : ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);

    while(n>2){
        for ( i = 0; i < n; i++)
        {
            a[i]=(a[i]+a[i+1])%10;         
        }
        n--;
    }
    printf("%d%d",a[0],a[1]);
    
    return 0;
    
}