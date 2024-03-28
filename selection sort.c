#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j] < a[min])
            {
                min=j;
            }
           int  temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    
    printf("sorted array:");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}