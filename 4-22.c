#include <stdio.h>
int main()
{
    int a, b, c, d;
    int i, j;
    puts("����������һ�������Ρ�");
    printf("һ�ߣ�");
    scanf("%d", &a);
    printf("��һ�ߣ�");
    scanf("%d", &b);
    c = a < b ? a:b;
    d = a > b ? a:b;
    for (i = 1; i <= c; i ++) 
	{
        for (j = 1; j <= d; j ++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}