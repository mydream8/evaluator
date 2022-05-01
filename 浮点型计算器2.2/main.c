#include <stdio.h>
int main()
{
    double number_a=10.5,number_b=10.5;

    char xuanxiang;

    /*printf("输入1-4的一个数 1为加法 2为减法 3为乘法 4为除法\n");

    scanf("%d",&xuanxiang);*/

for(;;)
{
       printf("请输入要用的算式:>");

//    printf("Please fuck enter the damn two numbers with your fucking shit like hands, separated by a space\n");

    scanf("%lf%c%lf",&number_a,&xuanxiang,&number_b);


if  (xuanxiang=='+')
{
  printf("%#lf\n",number_a+number_b);

}

else if(xuanxiang=='-')

{
  printf("%#lf\n",number_a-number_b);

}

else if(xuanxiang=='*')
{
   printf("%#lf\n",number_a*number_b);


}

else if(xuanxiang=='/')

      {
        if(number_b==0)

          printf("除数不能为零\n");
         else if(number_b!=0)
        printf("%#lf\n",number_a/number_b);

      }

else
{
       printf("输入错误\n");
}
}


    return 0;
}
