#include <stdio.h>
int validDate(int d, int m, int y);
int main()
{
	int d, m, y;
	printf("Insert DD/MM/YY: ");
	scanf("%d/%d/%d", &d, &m, &y);
	if (validDate(d, m, y) == 1)
	{
		printf("Valid Date");
	}
	else
	{
		printf("Invalid Date");
	};
}
int validDate(int d, int m, int y)
{
	if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		if (d > 1 && d <= 30)
		{
			return 1;
		}
	}
	if (m == 2)
	{
		if (y % 4 == 0)
		{
			if (d > 1 && d <= 29)
			{
				return 1;
			}
		}

		if (d > 1 && d <= 28)
		{
			return 1;
		}
	}

	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		if (d > 1 && d <= 31)
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}
