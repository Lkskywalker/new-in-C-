#include <stdio.h>
#include <stdlib.h>
int main(viod)
{
		int a = 10,
			b = 10,
			c=++a,//��a+1�ٸ�ֵc
			d=b++;//�ȸ�ֵd��b+1
		printf("%d %d %d %d",a,b,c,d);
		system("pause");
		return 0;
}