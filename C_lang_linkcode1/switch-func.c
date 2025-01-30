#include<stdio.h>
#include<stdlib.h>

void factorial(){
    int n,fact=1;

    printf("Enter a Number : \n");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
        fact*=i;
    
    printf("Factorial is %d \n\n",fact);
    
}

void prime(){

    int n,cnt=0;

    printf("Enter a Number : \n");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
        if(n%i==0)
            cnt++;
    if (cnt==2)
        printf("The Number is Prime\n\n");
    else
        printf("The Number is Not Prime\n\n");
    
}

void add(){
    int a,b,sum;
    printf("Enter Two Numbers : \n");
    scanf("%d%d",&a,&b);

    sum=a+b;

    printf("Sum of %d and %d is : %d\n\n",a,b,sum);
}

void palindrome(){
    int n,temp,rev=0;

    printf("Enter a Number : \n");
    scanf("%d",&n);
    temp=n;
    
    while (n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    //n=temp;
    
    if (temp==rev)
        printf("The Number is a Palindrome!!\n\n");
    else
        printf("The Number is Not a Palindrome!!\n\n");
    
}

void factor(){
    int n;

    printf("Enter a Number : \n");
    scanf("%d",&n);

    printf("Factors are : \n");

    for (int i = 1; i <= n; i++)
    {
        if(n%i==0){
            printf("%d ",i);
        }
    }
    printf("\n\n");
}

int main()
{

    int ch,c;

    while (1)
    {
    printf("Enter You Choice\n1.Factor\n2.Factorial\n3.Prime\n4.Palindrome\n5.Add\n6.Exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        factor();
        break;
    case 2:
        factorial();
        break;
    case 3:
        prime();
        break;
    case 4:
        palindrome();
        break;
    case 5:
        add();
        break;
    case 6:
        printf("Program Terminated!");
        exit(0);
    default:
        break;
    }
    }
    return 0;
}