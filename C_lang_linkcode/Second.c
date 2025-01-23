#include<stdio.h>

int main(){

    int roll;
    char name[20];
    float per;
    int s1,s2,s3,total;

    printf("Enter Student Roll No. : \n");
    scanf("%d",&roll);

    printf("Enter Student Name : \n");
    scanf("%s",name);

    printf("Enter Marks of the subjects : \n");
    scanf("%d%d%d",&s1,&s2,&s3);

    total=s1+s2+s3;

    per=total/3;

    printf("\n\t\tName\t\t : \t%s",name);
    printf("\n\t\tRoll No.\t : \t%d",roll);
    printf("\n\t\t-------------------------------");
    printf("\n\t\tMathematics\t : \t%d",s1);
    printf("\n\t\tComputer\t : \t%d",s2);
    printf("\n\t\tElectronics\t : \t%d",s3);
    printf("\n\t\tTotal Marks\t : \t%d",total);
    printf("\n\t\tPercentage\t : \t%.2f",per);
    printf("\n\t\t-------------------------------");

}