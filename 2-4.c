#include <stdio.h>
int main(void)
{
    int a;
    double b;
    printf("����int�ͱ���a:");        scanf("%d", &a);
    printf("����double�ͱ���b:");     scanf("%lf", &b);
    printf("���ͳ����˸����ͳ�����%f\n", a * b);
    printf("���ͳ����������ͳ�����%f\n", a / b);
    return 0;

}