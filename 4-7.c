#include <stdio.h>
int main ()
{
    int i,no;
    printf("������һ��������:");
    scanf("%d", &no);
	i=1;
	while (i<=(no/2))
    printf("%d ",i*=2);  
    printf("\n");
    
   
    return 0;
}