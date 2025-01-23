#include<stdio.h>
int main()
{
    float emi,roi,duration,amount;

    printf("Enter Amount : \n");
    scanf("%f",&amount);

    printf("Enter Rate of Interest(%%) : ");
    scanf("%f",&roi);

    printf("Enter the Duration : ");
    scanf("%f",&duration);

    roi= roi*duration;
    amount+=(amount*roi)/100;

    emi=amount/(duration*12);

    printf("\nThe EMI will be : %.3f",emi);

    return 0;

}