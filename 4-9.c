#include <stdio.h>
int main ()
{
    int a;
    printf("ÕıÕûÊı£º");
    scanf("%d", &a);
    if (a >= 0) 
	{
        while (a-- > 0)
		{
            if (a % 2)
			{
                putchar('+');
            }
			else
                putchar('-');
		} putchar('\n');
    } else 
    return 0;
	return 0;
}