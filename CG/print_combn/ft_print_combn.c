#include <stdio.h>

void ft_putchar(char c)
{
	printf("%c", c);
}

void ft_put_comma()
{
	ft_putchar(',');
	ft_putchar(' ');
}

void ft_print(int* arr, int n)
{
	int i;

	i = n - 1;
	while (1)
	{
		arr[i]++; // 8번째 계속 up
		if (arr[i] >= 10) // 8번째 10이상시 n-1 계속 up
		{
			arr[n - 1]++;
		}
	}
	if (n > 1)
	{
		i = 1;
		while (i < n)
		{
			if (arr[i] >= 10 - (n - 1 - i))
				arr[i] = arr[i - 1] + 1;
			i++;
		}
	}

}

void ft_print_combn(int n)
{
	int i;
	int arr[9];

	if (n > 10 || n < 0)
		return;

	i = -1;
	while (++i < n)
	{
		arr[i] = i; // 0123456789 to initialize array
	}
	while (arr[0] < 10)
	{
		i = -1;
		while (++i < n)
		{
			ft_putchar(arr[i] + '0');
		}
		arr[n - 1]++;

		if (arr[n - 1] == 10)
		{
			ft_print(arr, n);

		}
	}
}

int main()
{
	ft_print_combn(3);
	return 0;
}