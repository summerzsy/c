#include <stdio.h>
int main()
{
    int a, b, c, d, e = 0;
    printf("��ʼ��ֵ(cm):");
    scanf("%d", &a);
    printf("������ֵ(cm):");
    scanf("%d", &b);
    printf("�����ֵ(cm):");
    scanf("%d", &c);
    e = a;
    for (d = 0; d <= (b - e) / c; d ++)
	{
        printf("%dcm    %.2fkg\n", a, (a - 100) * 0.9);
    a += c;
    }
    return 0;
}