#include<stdio.h>
int main(void)
{
    int a;
    printf("������һ������:");     scanf("%d", &a);
    if ((a >= 0) == 1)
        printf("����ֵ��%d��\n", a);
    else 
        printf("����ֵ��%d��\n", -a);
    return 0;
}       