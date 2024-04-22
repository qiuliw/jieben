#include<stdio.h>
int main()
{
    int n,i,z;
    while(~scanf("%d",&n))
    {
        for(i=0;i<=n;i++)
        {
            for(z=0;z<n-i;z++)
                printf(" ");
            for(z=0;z<=i;z++){
                if(z==0||z==i)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
        for(i=0;i<n;i++){
            for(z=0;z<i;z++)
                printf(" ");
            for(z=0;z<=i;z++){
                if(z==0||z==i)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }  
              
    }
}