#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k;
    printf("请输入n的值:");
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i++)
    {   int space=abs(n+1-i);
        int startspace=2*n-1-2*space;
        if(i==1 || i==2*n+1)
        {for(k=1;k<=space;k++){printf(" ");} printf("*");printf("\n");}
        else
        {for(k=1;k<=space;k++){printf(" ");}
        printf("*");
        for(j=1;j<=startspace;j++){printf(" ");}
        printf("*");
        printf("\n");
        }

    }
    return 0;    
}