# include <stdio.h>
int main(void)
{
    int temp;
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("这两个数的最大公因数是 ",a,b);
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

