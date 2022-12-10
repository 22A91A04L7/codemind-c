#include<stdio.h>
int main()
{
    int yr,a,b,c;
    scanf("%d",&yr);
    a=yr%10;
    b=yr/10;
    c=b%10;
    printf("%d%d",c,a);
    
}