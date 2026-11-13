#include<stdio.h>
int main()
{
    int i,j,flag,count=0;
    for(i=2;i<200;i++)
    {
        flag=1;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
            
        }
         if(flag==1)
            {
          count+=1;
          printf("%-3d ",i);
          if(count%10==0    )
          {
            printf("\n");
          }
        
    }
     
            }
    return 0;

}