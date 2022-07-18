#include <stdio.h>
int main()
{
    int arr[5],i,temp,j;
    for(i=0;i<=4;i++)
    {
        printf("Enter the number:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<=4;i++)
    {
        printf("%d\n",arr[i]);
    }

     return 0;
}
