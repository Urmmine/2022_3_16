#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//����
//F10 - �����
//F11 - �����



//�����������Ӵ�С���

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d%d%d", &a, &b, &c);
//	//����
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
//	//���
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//��ӡ1 - 100��3�ı���

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	//for (i = 3; i <= 100; i+=3)
//	
//	{
//		//�ж�i�Ƿ�Ϊ3�ı���
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//�����������Լ��

int min(x, y)
{
	if (x < y)
	{
		return x;
	}
	else
		return y;
}

//forѭ������

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

//whileѭ��

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

//շת�����

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
//	printf("���Լ��:%d\n", n);
//	return 0;
//}

//��С������ = (m*n)/��С������


//��ӡ1000 - 2000��֮�������

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�ǲ�������
//		//1.��4�������ܱ�100����
//		//2.�ܱ�400����
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
//		//�ж�y�ǲ�������
//		//1.��4�������ܱ�100����
//		//2.�ܱ�400����
//		if (((y % 4 == 0) && (y % 100 != 0) )|| (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}


//��ӡ100 - 200�������
//���� - ����
//ֻ�ܱ�1������������

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2 - i-1֮�������ȥ�Գ�i�����ܲ�������
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
//			printf("%d ", i);//����
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
		//�ж�i�Ƿ�Ϊ����
		//2 - i-1֮�������ȥ�Գ�i�����ܲ�������
		int j = 0;
		int flag = 1;//����i��������
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
			printf("%d ", i);//����
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}


//�Ż�����

//m = a*b
//a��b��һ��������һ������ <= ��ƽ��m

#include <math.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)//i++2
	{
		int j = 0;
		int flag = 1;//����i��������
		for (j = 2; j <= sqrt(i); j++)
		//2 - sqrt(i)֮��
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);//����
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}







