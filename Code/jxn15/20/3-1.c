//小球重量，三个球A、B、C，大小形状相同且其中有一个球与其他球重量不同。要求编程找出这个不一样的球。

#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b)printf("c");
    else if(a==c)printf("b");
    else printf("c");
    return 0;
}