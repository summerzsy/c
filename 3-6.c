#include <stdio.h>
int main(void)
{
    int a,b,c,min;
    puts("��������������:");
    printf("����a:");      scanf("%d", &a);
    printf("����b:");      scanf("%d", &b);
	printf("����c:");      scanf("%d", &c);
	min=a;
    if (b<=min) min=b;
	if (c<=min) min=c;
        printf("��Сֵ��:%d\n", min);
    return 0;
} 