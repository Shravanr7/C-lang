#include <stdio.h>
int main()
{

    int a[50], i, j, n, cnt = 0;
    int pos;
    int temp[100]={0};
    printf("Enter Number of Elements in Array : ");
    scanf("%d", &n);

    printf("Enter the Elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    //for (i = 0; i < n; i++)
    //{
    //    pos = 1;
    //    for (j = 0; j < i; j++)
    //    {
    //        if (a[j] == a[i])
    //        {
    //            pos = 0;
    //            break;
    //        }
    //    }
    //    if (pos)
    //    {
//
    //        cnt = 1;
    //        for (j = i + 1; j < n; j++)
    //        {
    //            if (a[i] == a[j])
    //            {
    //                cnt++;
    //            }
    //        }
    //        printf("\n%d : %d", a[i], cnt);
    //    }
    //}

    for ( i = 0; i < n; i++)
    {
        if(temp[a[i]]==0)
        {
            cnt = 0;
            for ( j = i; j < n; j++)
            {
                if(a[i] == a[j])
                    cnt++;
            }
            printf("\n%d : %d",a[i],cnt);
            temp[a[i]] = 1;
        }
    }
    

    return 0;
}