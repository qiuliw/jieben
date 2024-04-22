// 为使电文保密，将电文中字母按一定规律进行转换，非字母保持不变，字母转换规律如下：
// 将字母循环更改为其前第4个位置的字符，A（a）与z（z）首尾相接，补全程序

#include <stdio.h>
#include <string.h>
#define N 4 //正数向前移动的位数 E -> A
int main() {
    char ch[80], *p = ch;
    scanf("%s", ch);
    while (*p) {
        if (*p >= 'a' && *p <= 'z') {
            *p = ((*p - 'a' - N) % 26 + 26) % 26 + 'a'; //负数取模
        }
        if (*p >= 'A' && *p <= 'Z') {
            *p = ((*p - 'A' - N) % 26 + 26) % 26 + 'A';
        }
        p++;
    }
    printf("%s", ch);
}