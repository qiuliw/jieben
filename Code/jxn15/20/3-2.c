//用递归的方法将一个整数n转换成字符串。例如，输人256，应输出“256”。
#include <stdio.h>
void func(int a){
    if(a/10!=0) func(a/10);
    printf("%d",a%10+'0');
}
int main(){
    int n;
    scanf("%d",&n);
    func(n);
    return 0;
}