#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,sum=0,pro=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0)
        sum+=arr[i];
        if(i%2==1)
        pro+=arr[i];
    }
    printf("%d",abs(sum-pro));
}