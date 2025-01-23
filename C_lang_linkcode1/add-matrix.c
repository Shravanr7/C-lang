#include<stdio.h>
int main(){

    int a[20][20],b[20][20],add[20][20];
    int i,j,r1,r2,c1,c2;

    printf("Enter Rows of A Matrix : ");
    scanf("%d",&r1);
    printf("Enter Column of A Matrix : ");
    scanf("%d",&c1);

    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Rows of B Matrix : ");
    scanf("%d",&r2);
    printf("Enter Column of B Matrix : ");
    scanf("%d",&c2);

    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
            scanf("%d",&b[i][j]);
    
    if(r1==r2&&c1==c2){
        for(i=0;i<r1;i++)
            for ( j = 0; j < c1; j++)
                add[i][j]=a[i][j]+b[i][j];
            
        for(i=0;i<r1;i++){
            for ( j = 0; j < c1; j++)
                printf("%3d",add[i][j]);
            printf("\n");
            }
    }
    else    
        printf("Addition Not Allowed!");
    return 0;
    
}