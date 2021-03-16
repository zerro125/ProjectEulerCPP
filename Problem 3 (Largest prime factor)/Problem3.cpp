#include <iostream>
#include <vector>

typedef unsigned __int64 uint64;

std::vector<uint64> primeFactors(uint64 number)
{
	std::vector<uint64> result;
	for (int i = 2; i <= number; )
	{
		if (number % i == 0)
		{
			number /= i;
			result.push_back(i);
		}
		else
			++i;
	}

	return result;
}

uint64 solve()
{
	return primeFactors(600851475143).back();
}

int main()
{
	std::cout << solve() << "\n";
}