#include <iostream>

bool amicable(int& a, int& b)
{
	int total = 0;
	int result = 0;

	for (size_t i = 1; i < a; i++)
	{
		if (a % i == 0)
		{
			total += i;
		}
	}

	for (size_t j = 1; j < b; j++)
	{
		if (b % j == 0)
		{
			result += j;
		}
	}

	if (total == b && result == a)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int solve()
{
	int sum = 0;

	for (int i = 1; i < 10001; i++)
	{
		for (int j = 1; j < 10001; j++)
		{
			if (amicable(i, j) == true && i != j)
			{
				sum += i + j;
			}
		}
	}

	return sum;
}

int main()
{
	std::cout << solve() << "\n";
}