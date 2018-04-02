#include<stdio.h>
int main(void)
{
    int A,B;
    puts("请输入两个整数。");
	printf("整数A:");  scanf("%d", &A);
	printf("整数B:");  scanf("%d", &B);	
    if (A==B)
        printf("A等于B\n");
    else if(A>B)
        printf("A大于B\n");
	else
		printf("A小于B\n");
    return 0;

}       