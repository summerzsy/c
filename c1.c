#include <stdio.h>
int main()
{
	float a,b,c;
	printf ("����������ʵ��(�Կո�ָ�����\n");
	scanf ("%f%f%f",&a,&b,&c);
	if(((a+b>c)&&(b+c>a)&&(a+c>b))==0)
	  printf("0\n");
	else if(a==b&&b==c)
	  printf("1\n");
	  else if(a==b||b==c||a==c)
	  printf("2\n");
	  else printf("3\n");
	return 0;
}

