#include<stdio.h>
int main()
{
	int i=0;
	char key;
	key=getchar();
	while(key!='\n')
	{
		i=i+1;
		if(key>='a'&&key<='z'||key>='A'&&key<='Z')
		{
			if(key>='a'&&key<=('z'-i)||key>='A'&&key<=('Z'-i))
			key=key+i;
			else key=key-(26-i);
		}
		printf("%c",key);
		key=getchar();
	}
	printf("\n");
	return 0;
 } 
  
