#include<stdio.h>
int main(){
    
    int i,j,k,n;

    printf("Enter the Number of rows : ");
    scanf("%d",&n);

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
    /*for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }*/
    return 0;
}