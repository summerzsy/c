#include <stdio.h>
int main()
{  
    int a, b=1, c=0;
    printf("����ֵ��");
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
    printf("Լ����%d����\n",c);
    return 0;
}