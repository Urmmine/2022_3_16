#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//调试
//F10 - 逐语句
//F11 - 逐过程



//将三个整数从大到小输出

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d%d%d", &a, &b, &c);
//	//调整
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//打印1 - 100间3的倍数

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	//for (i = 3; i <= 100; i+=3)
//	
//	{
//		//判断i是否为3的倍数
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//两个数的最大公约数

int min(x, y)
{
	if (x < y)
	{
		return x;
	}
	else
		return y;
}

//for循环遍历

//int main()
//{
//	int i = 0;
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int v = min(m,n) ;
//	for (i = v; i >= 1; i--)
//	{
//		if (m % i == 0 && n % i == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//while循环

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int v = min(m, n);
//	while (1)
//	{
//		if (m % v == 0 && n % v == 0)
//		{
//			printf("%d", v);
//			break;
//		}
//		v--;
//	}
//	return 0;
//}

//辗转相除法

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int t = 0;
//	while (m % n)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//	}
//	printf("最大公约数:%d\n", n);
//	return 0;
//}

//最小公倍数 = (m*n)/最小公倍数


//打印1000 - 2000年之间的闰年

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//1.被4整除不能被100整除
//		//2.能被400整除
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//1.被4整除不能被100整除
//		//2.能被400整除
//		if (((y % 4 == 0) && (y % 100 != 0) )|| (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


//打印100 - 200间的素数
//素数 - 质数
//只能被1和它本身整除

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2 - i-1之间的数字去试除i，看能不能整除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);//素数
//		}
//
//	}
//	return 0;
//}


int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		//2 - i-1之间的数字去试除i，看能不能整除
		int j = 0;
		int flag = 1;//假设i就是素数
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);//素数
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}


//优化代码

//m = a*b
//a和b中一定至少有一个数字 <= 开平方m

#include <math.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)//i++2
	{
		int j = 0;
		int flag = 1;//假设i就是素数
		for (j = 2; j <= sqrt(i); j++)
		//2 - sqrt(i)之间
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);//素数
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}







