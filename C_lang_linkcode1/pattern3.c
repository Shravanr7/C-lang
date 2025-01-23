#include<stdio.h>
int main(){
    
    int i,j,k,cnt=0,n;

    printf("Enter Number of Rows : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf("  ");
        }
        for(j=0;j<=i;j++){
            printf("%c ",'A'+i);
        }
        printf("\n");
    }
    return 0;
}