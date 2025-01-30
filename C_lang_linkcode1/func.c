#include<stdio.h>

void getsum();
void rectarea();

int main()
{

    rectarea();
    getsum();

    return 0;
}

void getsum(){
    int a,b,sum;
    printf("Enter Two Numbers : \n");
    scanf("%d%d",&a,&b);

    sum=a+b;

    printf("Sum of %d and %d is : %d\n",a,b,sum);
}

void rectarea(){

    int n1,n2,area;
    printf("Enter Length and Breadth of Rectangle :");
    scanf("%d%d",&n1,&n2);
    area=n1*n2;
    printf("Area of Rectangle is %d\n",area);
}