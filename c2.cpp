#include <stdio.h> 
int main(void) 
{ 
int s1,s2,grade; 
printf ("请输入两个实数(以空格分隔）：\n");
scanf("%d%d",&s1,&s2); 
if(s1>=0&&s1<=100&&s2>=0&&s2<=100) 
    if(s1>=60&&s2>=60)grade=1; 
    else grade=2; 
else grade=3;  
switch(grade) 
{ 
case 1:printf("it is  pass.");break; 
case 2:printf("it is  not pass.");break; 
case 3:printf("it is error.");break; 
default:printf("invalid score");
}
}
