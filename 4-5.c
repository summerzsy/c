#include <stdio.h>
int main ()
{
    int i,no;
    printf("������һ��������:");
    scanf("%d", &no);
	i=1;
    if (no >= 0) 
	{
        while (i<=no)
	{
        printf("%d ", i++);
        
    }   
		printf("\n");
    }  
    else;
    return 0;
}