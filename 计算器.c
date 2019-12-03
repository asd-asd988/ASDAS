#include<stdio.h>
int main()
{
	int a,b;
	int x;
	printf("请输入要执行哪种运算\n");
	printf("1.加法 2.减法 3.乘法 4.除法\n"); 
	scanf("%d",&x);	
	printf("请输入运算数值\n"); 
	scanf("%d%d",&a,&b);
	switch(x)
   {	case 1:printf("%d+%d=%d\n",a,b,a+b); break;
    	case 2:printf("%d-%d=%d\n",a,b,a-b); break;	
    	case 3:printf("%d*%d=%d\n",a,b,a*b); break;
        case 4:printf("%d/%d=%d\n",a,b,a/b); break;	
	} 
 } 
