# include <stdio.h>
int main(void)
{
    int temp;
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("������������������� ",a,b);
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("%d\n",a);
    getchar();
    getchar();
}

