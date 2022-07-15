#include <iostream>

class Calculate
{
public:
	Calculate()
	{

	}
	~Calculate()
	{

	}

	int sum(int x, int y) const
	{
		return (x + y);
	}

	int dif(int x, int y) const
	{
		return (x -y);
	}

	int prod(int x, int y) const
	{
		return (x * y);
	}

	int quot(int x, int y) const
	{
		return (x / y);
	}

};

int main()
{
	Calculate calc;
	std::cout << "The sum of the numbers is " << calc.sum(1, 2) << std::endl;
	std::cout << "The difference between the numbers is " << calc.dif(3, 2) << std::endl;
	return 0;
}
