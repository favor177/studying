#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<2)
    {
        printf("Left\n");
    }
    else{
        if(2<=x && x<=10)
        {
            printf("In\n");
        }
        else
        {
            printf("Right\n");
        }
    }
    return 0;
}