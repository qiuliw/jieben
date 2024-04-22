#include "stdio.h"
int main(){
    int t,n,m;
    m=0;
    scanf("%d",&n);
    t=n;
    while(n){
        m=m*10+n%10;
        n/=10;
    }
    if(t==m)printf("%d是回文数",t);
    else printf("%d不是回文数",t);
}