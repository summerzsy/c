#include <stdio.h>
int main ()
{
    int a,b,c=-1;
    printf("������һ����������");
    scanf("%d", &a);
	for (b=1;b<=a;b +=2)
	{
		c +=2;
	    printf("%d ",c);
	}
	printf("\n");
    return 0;
}