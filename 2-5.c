# include <stdio.h>
int main(void)
{
	int x, y;
	puts("请输入两个整数。");
	printf("整数x:");  scanf("%d", &x);
	printf("整数y:");  scanf("%d", &y);
    printf("%.6lf%%\n", (double)x/y*100);
	return 0;
}