#include<stdio.h>
/*void mult(){     //Type 1: Without Argument, Without Return
    int a,b;

    printf("Enter Two Numbers : \n");
    scanf("%d%d",&a,&b);

    printf("The Sum of the Numbers is %d",a*b);
}
int main()
{

    mult();

    return 0;
}*/
/*void mult(int a, int b){      //Type 2: With Argument, Without Return


    printf("The Sum of the Numbers is %d",a*b);
}
int main()
{
    int a,b;

    printf("Enter Two Numbers : \n");
    scanf("%d%d",&a,&b);

    mult(a,b);

    return 0;
}*/
/*int mult(){       //Type 3: Without Argument, With Return
    int a,b;

    printf("Enter Two Numbers : \n");
    scanf("%d%d",&a,&b);

    return a*b;
}
int main()
{

    printf("The Sum of the Numbers is %d",mult());

    return 0;
}*/
int mult(int a, int b){     //Type 4: With Argument, With Return
    
    return a*b;
}
int main()
{
    int a,b;

    printf("Enter Two Numbers : \n");
    scanf("%d%d",&a,&b);

    printf("The Sum of the Numbers is %d",mult(a,b));

    return 0;
}