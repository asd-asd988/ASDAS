#include<stdio.h>
int main()
{
	int a,b;
	int x;
	printf("������Ҫִ����������\n");
	printf("1.�ӷ� 2.���� 3.�˷� 4.����\n"); 
	scanf("%d",&x);	
	printf("������������ֵ\n"); 
	scanf("%d%d",&a,&b);
	switch(x)
   {	case 1:printf("%d+%d=%d\n",a,b,a+b); break;
    	case 2:printf("%d-%d=%d\n",a,b,a-b); break;	
    	case 3:printf("%d*%d=%d\n",a,b,a*b); break;
        case 4:printf("%d/%d=%d\n",a,b,a/b); break;	
	} 
 } 
