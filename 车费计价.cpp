#include<stdio.h>
int main()
{
    float x,cost;
    printf("请输入里程数(km)");
    scanf("%f",&x);
    if(x<=3) cost=6;
    else cost=6+(x-3)*1.8;
    printf("%f",cost);
    return 0;
}