#include<stdio.h>
int main()
{
	int a[10],b[10],c[10]={0},j=0,i;
	printf("ɵ��ֻ������������\n������ʮ����������\n");
	for(i=0;i<10;i++)
	    scanf("%d",&a[i]);
		for(i=0;i<10;i++)
		   b[i]=a[i];
	printf("ɵ����Ҫ���㡣����������������\n");	 
	while(a[0]>=0|a[1]>=0|a[2]>=0|a[3]>=0|a[4]>=0|a[5]>=0||a[6]>=0||a[7]>=0||a[8]>=0||a[9]>=0)
	{
		for(i=0;i<10;i++)
		{
			if(a[i]==0)
			{
				c[j]=b[i];
				j++;
			 } 
		}
		for(i=0;i<10;i++)
		{
			a[i]=a[i]-1;
		}
	}
	printf("ɵ���������\n");
	for(j=0;j<10;j++)
	printf("%5d",c[j]);
	return 0;
}
