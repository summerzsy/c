#include <stdio.h>
int main ()
{
    int a,b=0;
    do {
        printf("������ һ����������");
        scanf("%d", &a);
        if (a <= 0)
            puts("\a�벻Ҫ�����������");
    } while (a <= 0);
    printf("%d��λ����", a);
    while (a >=1) {
        b++;
        a /= 10;
    }printf("%d", b);
    puts("��");
    return 0;
}