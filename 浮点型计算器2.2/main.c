#include <stdio.h>
int main()
{
    double number_a=10.5,number_b=10.5;

    char xuanxiang;

    /*printf("����1-4��һ���� 1Ϊ�ӷ� 2Ϊ���� 3Ϊ�˷� 4Ϊ����\n");

    scanf("%d",&xuanxiang);*/

for(;;)
{
       printf("������Ҫ�õ���ʽ:>");

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

          printf("��������Ϊ��\n");
         else if(number_b!=0)
        printf("%#lf\n",number_a/number_b);

      }

else
{
       printf("�������\n");
}
}


    return 0;
}
