#include <stdio.h>
int main()
{  
    int a, b=1, c=0;
    printf("整数值：");
    scanf("%d", &a);
    while (b <= a)
	{
        if (a % b)
		{
            b ++;
        } 
		else
		{
            printf("%d ", b);
            b ++;
            c ++;
        }
	}
    putchar('\n');
    printf("约数有%d个。\n",c);
    return 0;
}