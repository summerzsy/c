#include <stdio.h>
int main ()
{
    int a, b;
    printf("��ʾ���ٸ�*��");
    scanf("%d", &a);
    b = 1;
    while (b <= a) 
	{ 
        putchar('*');
        b ++;
        if ((b % 5) == 1) 
            printf("\n");
    }
    puts("");
    return 0;
}