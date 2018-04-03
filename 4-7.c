#include <stdio.h>
int main ()
{
    int i,no;
    printf("请输入一个正整数:");
    scanf("%d", &no);
	i=1;
	while (i<=(no/2))
    printf("%d ",i*=2);  
    printf("\n");
    
   
    return 0;
}