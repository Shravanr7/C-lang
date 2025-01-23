#include<stdio.h>
int main(){
    
    int i,j,k,n;

    printf("Enter the Number of rows : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf("  ");
        }
        for(j=0;j<i;j++){
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
        return 0;
}