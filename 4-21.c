#include <stdio.h>
int main()
{
    int a, i, j;
    puts("����һ��������");
    printf("�������м��㣺");
    scanf("%d", &a);
    for (i = 1; i <= a; i ++) 
	{
        for (j = 1; j <= a; j ++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}