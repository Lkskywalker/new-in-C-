#include <stdio.h>
#include <stdlib.h>
int main(viod)
{
		int a = 10,
			b = 10,
			c=++a,//先a+1再赋值c
			d=b++;//先赋值d再b+1
		printf("%d %d %d %d",a,b,c,d);
		system("pause");
		return 0;
}