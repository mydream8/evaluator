#pragma once
typedef double d;
void input(const d* a, const d* b, char* s)
{
	scanf_s("%lf%c%lf", a,s,1,b);
	getchar();
}
void add(const d* a, const d* b)
{
	printf("%lf\n", *a + *b);
}
void sub(const d* a, const d* b)
{
	printf("%lf\n", *a - *b);
}
void mul(const d* a, const d* b)
{
	printf("%lf\n", *a * *b);
}
void multiplication(const d* a, const d* b)
{
	printf("%lf\n", *a / *b);
}
int huitiao(const d* a, const d* b, const char* fu)
{
	switch (*fu)
	{
	case '+':add(a, b); break;
	case '-':sub(a, b); break;
	case '*':mul(a, b); break;
	case '/':multiplication(a, b); break;
	default: return -1;
	}
	return 0;
}



