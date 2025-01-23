#include<stdio.h>
#include<math.h>
int isPrime(int n){
    int cnt=0,i;

    for ( i = 1; i <=n; i++)
        if(n%i==0)
            cnt++;
    if(cnt==2)
        return 1;
    else
        return 0;
    //return (cnt==2);     Alternative for if else, giving direct boolean value
    
}
int main(){

    int i,n,pn;
    int a[20],prime[20];

    printf("Enter Number of Elements in Array : ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
        
    for ( i = 0; i < n; i++)
    {
        if(isPrime(a[i])){
            prime[pn]=a[i];
            pn++;
        }
    }

    if(pn>0){
        printf("The List of Prime Numbers are : ");
        for ( i = 0; i < pn; i++)
        {
            printf("\n%d ",prime[i]);
        }
    }
    else    
        printf("Prime Number Not Found !!");
    
    
}