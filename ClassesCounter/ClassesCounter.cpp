// ClassesCounter.cpp : Defines the entry point for the console application.
//

#include <iostream>
class Counter
{
private:
	unsigned int count; // only positive numbers - count
public:
	Counter(): count(0) // constructor
	{/* empty body */}
	void incrementCount() // incrementing count
	{
		count++;
	}
	int getCount() // return count
	{
		return count;
	}
};

int main()
{
	Counter Counter1, Counter2; // define and initialize

	std::cout << "\n Count1 = " << Counter1.getCount(); // display count
	std::cout << "\n Count2 = " << Counter2.getCount();

	Counter1.incrementCount(); //increment Count1
	Counter2.incrementCount(); //increment Count2
	Counter2.incrementCount(); //increment Count2 second time


	std::cout << "\n Count1 = " << Counter1.getCount(); // display again Counter1 &  2
	std::cout << "\n Count2 = " << Counter2.getCount();

	std::cout << std::endl;

	system("pause");
    return 0;
}

