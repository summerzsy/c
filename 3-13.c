#include <stdio.h>
int main(void)
{
	int month;
    printf("�������·ݣ�");
    scanf("%d", &month);
    switch (month) {
        case 1 : printf("%d���Ƕ�����", month); break;
        case 2 : printf("%d���Ƕ�����", month); break;
        case 3 : printf("%d���Ǵ�����", month); break;
        case 4 : printf("%d���Ǵ�����", month); break;
        case 5 : printf("%d���Ǵ�����", month); break;
        case 6 : printf("%d�����ļ���", month); break;
        case 7 : printf("%d�����ļ���", month); break;
        case 8 : printf("%d�����ļ���", month); break;
        case 9 : printf("%d�����＾��", month); break;
        case 10 : printf("%d�����＾��", month); break;
        case 11 : printf("%d�����＾��", month); break;
        case 12 : printf("%d���Ƕ�����", month); break;
        default : printf("%d�²����ڡ�", month); break; 
    }
    printf("\n");
    return 0;
}
