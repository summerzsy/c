
#include <stdio.h>
int main()
{
    int i, j, len;
    puts("����ֱ�������Ϸ��ĵ���ֱ�������Ρ�");
    printf("�̱ߣ�");
    scanf("%d", &len);
    for (i = 0; i <= len; i ++) 
	{
        for (j = 1; j <= i; j ++)
            putchar(' ');
        for (j = 1; j <= len - i; j ++)
            putchar('*');
        printf("\n");
    }
    return 0;
}