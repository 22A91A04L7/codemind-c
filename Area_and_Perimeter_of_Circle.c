#include<stdio.h>
int main()
{
    int r;
    float area,pm;
    scanf("%d",&r);
    area=3.14*r*r;
    pm=2*3.14*r;
    printf("%.2f
%.2f",area,pm);
}