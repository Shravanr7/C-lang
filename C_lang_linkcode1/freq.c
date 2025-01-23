#include<Stdio.h>
int main(){

    int i,j,n,cnt=0,a[20],key;

    printf("Enter Number of Elements : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter Element to search : ");
    scanf("%d",&key);

    for(i=0;i<n;i++){
            if(a[i]==key){
                cnt++;
        }
    }
    if(cnt==0)
        printf("%d Does Not Exist",key);
    else
        printf("%d is present %d times",key,cnt);

    return 0;
}