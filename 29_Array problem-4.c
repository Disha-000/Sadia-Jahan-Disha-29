#include<stdio.h>
int main()
{
    int arr[100],n,i,j,temp;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter the element of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                    {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%d",arr[i]);
        }
        return 0;
}