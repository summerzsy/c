#include <stdio.h>
int main ()
{
    int no;
    printf("������һ��������:");
    scanf("%d", &no);
    if (no >= 0) 
	{
        while (no >= 0)
	{
        printf("%d ", no);
        no--;
    }   
		printf("\n");
    }  
    else;
    return 0;
}