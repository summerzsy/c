#include <stdio.h>
int main(void)
{
    int a, b;
    puts("������������:");
    printf("����A:");      scanf("%d", &a);
    printf("����B:");      scanf("%d", &b);
    puts("�Ƚ�A��B�Ĵ�С");
    if ((a >= b) == 1)
        if (a == b)
            printf("������������������:%d\n", (a == b));
        else
            printf("A����B����������:%d\n", (a > b));
    else
        printf("AС��B����������:%d\n", (a < b));
    return 0;
} 