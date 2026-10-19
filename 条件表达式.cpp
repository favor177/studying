#include<stdio.h>
int main()
{
    int x,y;
    printf("请输入一个数字");
    scanf("%d",&x);
    y=x>=10?'Y':'N';
    printf("%c",y);

    return 0;

}