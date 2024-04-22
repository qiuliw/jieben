// 阅读题中看到
//输出了11-30间的素数
#include <stdio.h>
int main(){
    int i,j,k=0;
    for(j=11;j<=30;j++){
        for(i=2;i<j;i++)
            if(!(j%i))break;
        if(i>=j)printf("%d\t",j);
    }
}
