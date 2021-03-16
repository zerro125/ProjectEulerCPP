#include <iostream>

int multiplier(int num)
{
	return 0;
}


template <typename ... M>
int multiplier(int num, int m1, M... m)
{
	return num % m1 == 0 ? num : multiplier(num, m...);
}


template <typename ... M>
int sumOfMultiples(int below, M... m)
{
	int result = 0;
	for (int i = 1; i < below; ++i)
	{
		result += multiplier(i, m...);
	}

	return result;
}

int solve()
{
	return sumOfMultiples(1000, 3, 5);
}


int main()
{
	std::cout << solve() << std::endl;
}