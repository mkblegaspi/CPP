#include <iostream>
#include <math.h>

class InputNum
{
public:
	InputNum()
	{
		std::cout << "Enter a number: " << std::endl;
		std::cin >> _num;
	}

	int GetValue() const
	{
		return _num;
	}

	void factorial()
	{
		InputNum aNum;
		for(int i = 0; i <= aNum._num; i++)
		{
			std::cout << std::pow(_num, i) <<  std::endl;
		}
	}

private:
	int _num;
};


int main()
{
	InputNum num;
	std::cout << "The value is " << num.GetValue() << std::endl;
	num.factorial();
	return 0;
}
