#include <stdio.h>
#include "head.h"
int main()
{

	d number_a = 0, number_b = 0;	
	char xuanxiang = '&';
	for (;;)
	{
		printf("��������������ʽ:>");
		input(&number_a, &number_b, &xuanxiang);
		if ((!number_b) && (xuanxiang == '/'))
		{
			printf("�������������\n");
			continue;
		}
		if (huitiao(&number_a, &number_b, &xuanxiang))
		{
			printf("�������������\n");
		}

	}
	return 0;
}
