#include <stdio.h>
int main ()
{
    int a,b,c=0;
    printf("������һ����������");
    scanf("%d", &a);
	for (b=1;b<=a;b++)
	{
		c +=b;
		c %=10;
	    printf("%d",c);
		c=0;
	}
	printf("\n");
    return 0;
}