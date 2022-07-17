#include <iostream>

class InputNNum
{
public:
	InputNum()
	{
		std::cout << "Enter number ";
		std::cin >> _num;
	}

	int GetValue() const
	{
		return _num;
	}

	void AddInput()
	{
		InputNum aNum;
		_num = _num + aNum.GetValue();
	}

private:
	int_num;
};

int main()
{
	InputNum num;
	std::cout << "The value is " << num.GetValue() << std::endl;
	num.AddInput();
	std::cout << "Now the value is " << num.GetValue() << std::endl;
	return 0;
}
