#include <stdio.h>
int main ()
{
    int a,b,c=0;
    printf("������һ����������");
    scanf("%d", &a);
	for (b=1;b<=a;b++)
	{
		c ++;
	    printf("%d�Ķ��η���%d\n",c,c*c);
	}
    return 0;
}