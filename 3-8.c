#include <stdio.h>
int main(void)
{
    int a, b;
    puts("����������������");
    printf("����1:");      scanf("%d", &a);
    printf("����2:");      scanf("%d", &b);
    if (a > b)
        printf("���ǵĲ���%d��\n", a-b);
    else 
        printf("���ǵĲ���%d��\n", b-a);
    return 0;

}