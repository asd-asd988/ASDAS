#include<stdio.h>
int main()
{
	int i=0;
	char key;
	printf("请输入接收到的密文\n");
	key=getchar();
	while(key!='\n')
	{
		i=i+1;
		if(key>='a'&&key<='z'||key>='A'&&key<='Z')
		{
			if(key>=('a'+i)&&key<='z'||key>=('A'+i)&&key<='Z')
			key=key-i;
			else key=key+(26-i);
		}
		printf("%c",key);
		key=getchar();
	}
	printf("\n");
	return 0;
 } 
