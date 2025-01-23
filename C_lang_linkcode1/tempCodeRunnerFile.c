#include<stdio.h>
int main(){

    int i,j,k,merg[50],a[20],b[20],n1,n2,m=0;  

    printf("Enter Size of Array A : ");
    scanf("%d",&n1); 

    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);

    printf("Enter Size of Array B : ");
    scanf("%d",&n2); 

    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    
    i = j = m = 0;

    for(; i < n1 && j < n2; ) { // Replacing the first while loop with a for loop
        if(a[i] <= b[j]) {
            merg[m] = a[i];
            m++;
            i++;
        } else {
            merg[m] = b[j];
            m++;
            j++;
        }
    }

    while(i < n1) {
        merg[m] = a[i];
        i++;
        m++;
    }
    while(j < n2) {
        merg[m] = b[j];
        j++;
        m++;
    }

    printf("The Merged Array is ");
    for(k = 0; k < m; k++) {
        printf("%d ", merg[k]);
    }

    return 0;
}
