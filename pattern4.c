#include<stdio.h>
int main(){

    int i,n,j,k;

    printf("Enter Number of Rows : ");
    scanf("%d",&n);

    /*for(i=1;i<=n;i++){
        printf("* ");
        for(j=2;j<n;j++){
            if(i==1||i==n){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("*\n");
    }*/
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf("  ");
        }
        printf("# ");
        for(j=2;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}