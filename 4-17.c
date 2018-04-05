#include <stdio.h>
int main ()
{
    int a,b,c=0;
    printf("请输入一个正整数：");
    scanf("%d", &a);
	for (b=1;b<=a;b++)
	{
		c ++;
	    printf("%d的二次方是%d\n",c,c*c);
	}
    return 0;
}