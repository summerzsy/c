#include <stdio.h>
int main (void)
{
    int no;
    printf("������:");
    scanf("%d", &no);
    if (no >= 1)
	{ 
    while (no-- > 0)
	{
        putchar('*');
    } 
	putchar('\n');
    } else
    return 0;
	return 0;
}