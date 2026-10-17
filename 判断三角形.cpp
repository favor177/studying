#include<stdio.h>
int main()
{
    int a,b,c;
    printf("请输入三角形边长（用空格隔开）");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c  &&  a+c>b  &&  b+c>a)//可以构成三角形
    {
     if(a==b && b==c &&  a==c)
     {
        printf("该三角形是等边三角形");
    }
     else if(a==b ||  b==c  ||  a==c)
     {
        printf("该三角形是等腰三角形");
      }
      else{
        printf("该三角形是不等边三角形");
      }

    }

    else
    {
        printf("不能构成三角形");
    }
    return 0;
    
}
