#include<stdio.h>
int main()
{
    int n,i,arr[100],max;
    printf("enter number of elements:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    scanf("%d",&arr[i]);
    max=arr[0];
    for(i=1;i<=n;i++)
        if(arr[i]>max)
        max=arr[i];
    printf("largest element=%d\n",max);

}
