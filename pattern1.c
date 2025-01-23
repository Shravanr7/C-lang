#include<stdio.h>
int main(){

    int i,j,n;

    printf("Enter Number of Rows : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        printf("%c",(i%2==0)?'*':'#');          
         /* if(i%2==0){
         printf("# ");
       }
       else{
       printf("* ");
       }
       }*/
        }
        printf("\n");
    }

   /* for(i=1;i<=n;i++){
        printf("\n# ");
        for(int j=2;j<=i;j++){
            printf("* ");
        }
    }*/
    return 0;
}