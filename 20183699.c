/*
LAB4. 피보나치 수의 출력
20183699 노민주
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rfibo(int n);
int sfibo(int n);

int main()
{

	for (int n = 3; n < 46; n++)
	{
		if (n % 2 == 1)
		{
			printf("rfibo(%d) = %d\n", n, rfibo(n));
			printf("sfibo(%d) = %d\n", n, sfibo(n));
		}
	}
	return 0;
}

int rfibo(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return rfibo(n - 1) + rfibo(n - 2);
}

int sfibo(int n)
{

	for (int i = n-1; i <= n; i++)
	{
		static int f0 = 0;
		static int f1 = 1;
		static int f2 = 0;
		f2 = f0 + f1;
		f0 = f1;
		f1 = f2;
		if (i == n)
			return f2;
	}

}