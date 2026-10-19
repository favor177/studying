#include<stdio.h>
int main()
{
    double a,b,result;
    char F;
    printf("请输入表达式：\n");
    scanf("%lf%c%lf",&a,&F,&b);
    switch(F)
    {
        case '+' :  result=a+b;break;
        case '-' :  result=a-b;break;
        case '*' :  result=a*b;break;
        case '/' :  if(b==0)
    {
        printf("除数不能为0!");
        return 1;
    }
    result=a/b;break;
        default : printf("运算符输入错误！");
    }
    printf("运算结果为:%f",result);
    return 0; 
}