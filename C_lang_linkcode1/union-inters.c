#include<stdio.h>
int main(){

    int i,j,n1,k,uni[50],a[20],b[20],n2,u=0,in=0,intersection[20];  

    printf("Enter Size of Array A : ");
    scanf("%d",&n1); 

    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("Enter Size of Array B : ");
    scanf("%d",&n2); 

    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);

    for(i=0;i<n1;i++){
        for(j=i+1;j<n1;j++){
            if(a[i]==a[j]){
                for(k=j;k<n1-1 ;k++)
                    a[k]=a[k+1];
                n1--;
                j--;
            }
        }
    }
    for(i=0;i<n2;i++){
        for(j=i+1;j<n2;j++){
            if(b[i]==b[j]){
                for(k=j;k<n2-1;k++)
                    b[k]=b[k+1];
                n2--;
                j--;
            }
        }
    }
    printf("\nA Array : \n");
    for(i=0;i<n1;i++){
        printf("%d ",a[i]);
    }

    printf("\nB Array : \n");
    for(i=0;i<n2;i++){
        printf("%d ",b[i]);
    }
    
    for(i=0;i<n1;i++,u++)
        uni[u]=a[i];

    for(i=0;i<n2;i++,u++)
        uni[u]=b[i];

    for(i=0;i<n1;i++){
        for(j=n1;j<u;j++){
            if(uni[i]==uni[j]){
                for(k=j;k<u;k++)
                    uni[k]=uni[k+1];
                intersection[in]=uni[i];
                in++;
                u--;
            }
        }
    }

    printf("\nUnion is : ");
    for(i=0;i<u;i++)
        printf("\n%d",uni[i]);
   if(in>0)
   {
     
    printf("\nIntersection is : ");
    for(i=0;i<in;i++)
        printf("\n%d ",intersection[i]);

   }
    return 0;

}