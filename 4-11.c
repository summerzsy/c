#include <stdio.h>
int main ()
{
    int a;
    do {
        printf("������ һ����������");
        scanf("%d", &a);
        if (a <= 0)
            puts("\a�벻Ҫ�����������");
    } while (a <= 0);
    printf("%d������ʾ�Ľ����", a);
    while (a > 0) {
        printf("%d", a % 10);
        a /= 10;
    }
    puts("��");
    return 0;
}