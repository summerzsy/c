#include <stdio.h>
int main ()
{
    int sum=0,a,b=0;
    printf("������һ����������");
    scanf("%d", &a);
	while (b<a)
	{
		b++;
		sum=sum+b;
    }
	printf("1��%d�ĺ�Ϊ%d",a,sum);
    puts("��");
    return 0;
}