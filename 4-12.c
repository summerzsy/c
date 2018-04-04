#include <stdio.h>
int main ()
{
    int a,b=0;
    do {
        printf("请输入 一个正整数：");
        scanf("%d", &a);
        if (a <= 0)
            puts("\a请不要输入非整数。");
    } while (a <= 0);
    printf("%d的位数是", a);
    while (a >=1) {
        b++;
        a /= 10;
    }printf("%d", b);
    puts("。");
    return 0;
}