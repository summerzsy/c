#include <stdio.h>
int main(void)
{
    int a, b, c;
    puts("����������������");
    printf("����a:");      scanf("%d", &a);
    printf("����b:");      scanf("%d", &b);
    c = a > b ? a - b:b - a;
    if (c > 11)
        puts("���ǵĲ���ڵ���11��");
    else 
        puts("���ǵĲ�С�ڵ���10��");
    return 0;
}