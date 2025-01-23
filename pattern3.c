#include<stdio.h>
int main(){

    int i,n,j,k,l;

    printf("Enter Number of Rows : ");
    scanf("%d",&n);

    /*for(i=1,l=0;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf("\t  ");
        }
        for(j=1;j<=i;j++){
            printf("\t%d ",l);
            l+=2;
        }
        printf("\n");
    }*/
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){ //OR for(k=i;k<=n;k++)
            printf("  ");
        }
        for(j=i;j>=1;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}