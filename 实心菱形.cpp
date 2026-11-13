#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=1,n,j,k;
    printf("请输入n的值:");
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i++)
    {
        int space=abs(n+1-i);
        int start=2*n+1-2*space;
        for(j=1;j<=space;j++){printf(" ");}
        for(k=1;k<=start;k++){printf("*");}
        for(j=1;j<=space;j++){printf(" ");}
        printf("\n");
    }
    return 0;
}