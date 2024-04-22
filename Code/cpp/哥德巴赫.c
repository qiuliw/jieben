/*
数学领域著名的“哥德巴赫猪想”的大致意思是：任何一个大于4的偶数总能表示为两个素数之和。
比如：24=5+19，其中5和19都是素数。编写程序验证。
*/
#include <stdio.h>
int isPrime(int n){
    for(int i=2;i<n;++i)
        if(n%i==0) return 0;
    return 1;
}
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=2;i<=n/2;++i)
        if(isPrime(i)&&isPrime(n-i))
            printf("%d=%d+%d\n",n,i,n-i);    
    
    return 0;
}