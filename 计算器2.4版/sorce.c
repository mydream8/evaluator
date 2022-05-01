#include <stdio.h>
#include "head.h"
int main()
{

	d number_a = 0, number_b = 0;	
	char xuanxiang = '&';
	for (;;)
	{
		printf("请输入需计算的算式:>");
		input(&number_a, &number_b, &xuanxiang);
		if ((!number_b) && (xuanxiang == '/'))
		{
			printf("输入错误，请重试\n");
			continue;
		}
		if (huitiao(&number_a, &number_b, &xuanxiang))
		{
			printf("输入错误，请重试\n");
		}

	}
	return 0;
}
