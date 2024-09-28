#include<stdio.h>
int main()
{
    int a[100],n,i,max,mini;
    printf("How many numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     max=a[0];
    for(i=1;i<n;i++)
    {
        if(max < a[i])
        {
            max=a[i];
        }
    }
    printf("Maximum number:%d\n",max);


     mini=a[0];
    for(i=1;i<n;i++)
    {
        if(mini > a[i])
        {
            mini=a[i];
        }
    }
    printf("Minimum number:%d\n",mini);
    return 0;
}
