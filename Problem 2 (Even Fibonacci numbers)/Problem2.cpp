#include <iostream>

int sumOfOddFibonacci(int below, int f1, int f2)
{
	int result = 0;
	for (int f = f1 + f2; f < below; f = f1 + f2)
	{
		if (f % 2 == 0)
			result += f;

		f1 = f2;
		f2 = f;
	}

	return result;
}

int solve()
{
	return sumOfOddFibonacci(4'000'000, 0, 1);
}

int main()
{
	std::cout << solve() << "\n";
}