#include <stdio.h>
int main(void)
{
    int a, b, n, max, min;
    puts("����������������");
    printf("����a:");  scanf("%d", &a);
    printf("����b:");  scanf("%d", &b);
    max = a > b ? a:b;
    min = a < b ? a:b;
	a = max;
    b = min;
    n = 0;
    do
	{
        n = n + min;
        min = min + 1;
    } while (max >= min);
    printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d��\n", b, a, n );
    return 0;
}
