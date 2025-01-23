#include<stdio.h>
int main(){

    int a[20][20];
    int i,r,c,j;

    printf("Enter number of Rows : ");
    scanf("%d",&r);
    printf("Enter number of Columns : ");
    scanf("%d",&c);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%3d",a[i][j]);
        printf("\n");
    }
    return 0;
}