#include <stdio.h>
int main ()
{
    int sum=0,a,b=0;
    printf("请输入一个正整数：");
    scanf("%d", &a);
	while (b<a)
	{
		b++;
		sum=sum+b;
    }
	printf("1到%d的和为%d",a,sum);
    puts("。");
    return 0;
}