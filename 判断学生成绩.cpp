#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<60)
    {
        printf("不及格\n");
    }
    else if(x>=60 && x<70)
    {
        printf("及格\n");
    }
    else if(x>=70 && x<80)
    {
        printf("一般\n");

    }
    else if(x>=80 && x<90)
    {
        printf("良好\n");

    }
    else
    {
        printf("优秀\n");
    }
    return 0;

}