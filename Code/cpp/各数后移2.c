#include<stdio.h>
int main(){
    int a[100],n,m,temp,i,j;
    printf("请输入数组长度(<=100):");
    scanf("%d",&n); 
    printf("请输入%d个数:",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("请输入移动的位数:");
    scanf("%d",&m);

    //ROR M 次
    for(i=1;i<=m;i++){
        temp=a[0];
        for(j=1;j<n;j++)
            a[j-1]=a[j];
        a[n-1]=temp;
    }

    for(i=0;i<n;i++)
        printf("%4d",a[i]);
    return 0;
}