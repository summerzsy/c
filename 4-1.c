#include <stdio.h>
int main(void)
{
    int retry;
    do
	{
        int a;
        printf("������һ������:");
        scanf("%d", &a);
        if (a >= 0)
		{
            if (a == 0) 
                puts("������Ϊ0��");
            else
                puts("����������0��");
    }   else 
            puts("������С��0��");
        printf("�Ƿ����? <Yes...0/No...9>:");
        scanf("%d", &retry);
} while (retry == 0);
    return 0;
}
