#include <stdio.h>
int main(void)
{
    int a,b,c,d,max;
    puts("�������ĸ�����:");
    printf("����a:");      scanf("%d", &a);
    printf("����b:");      scanf("%d", &b);
	printf("����c:");      scanf("%d", &c);
	printf("����d:");      scanf("%d", &d);
	max=a;
    if (b>=max) max=b;
	if (c>=max) max=c;
	if (d>=max) max=d;
        printf("���ֵ��:%d\n", max);
    return 0;
} 