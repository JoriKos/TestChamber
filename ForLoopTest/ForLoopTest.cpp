#include "VectorVector.h"
#include <iostream>
#include <string>

int main()
{
	//Print vector of string vectors and get input after each vector
	/* VectorVector vector = VectorVector();
	std::string component;
	
	for (int i = 0; i < vector.GetVectorVector().size(); i++)
	{
		for (int j = 0; j < vector.GetVectorVector().at(i).size(); j++)
		{
			std::cout << vector.GetVectorVector().at(i).at(j) << "\n";
		}
		std::cin >> component;
	}
	*/

	//Print out a vector of string vectors. Works thanks to wiki.tf/User:TidB :)
	/*
	VectorVector vector = VectorVector();
	//TidB is god :)
	for (int i = 0; i < vector.GetVectorVector().size(); i++)
	{
		for (int j = 0; j < vector.GetVectorVector().at(i).size(); j++)
		{
			std::cout << vector.GetVectorVector().at(i).at(j);
		}
	}
	*/
	//Test if for loops can be broken using break;. They can
	/*
	for (int i = 0; i < 10; i++) 
	{
		if (i < 8) 
		{
			std::cout << i << std::endl;
		}
		if (i > 8) 
		{
			break;
		}
	}
	*/

	//Check if bool, bool, bool = false works. Does not
	/*
	bool test = true;
	bool test2 = true;
	bool test3 = true;

	std::cout << test << std::endl;
	std::cout << test2 << std::endl;
	std::cout << test3 << std::endl;

	test, test2, test3 = false;

	std::cout << test << std::endl;
	std::cout << test2 << std::endl;
	std::cout << test3 << std::endl;
	*/

	// Check if it goes past a for loop or waits until for loop ended. Waits until for loop has ended.
	/* for (int i = 0; i < 5; i++)
	{
		std::cout << i << std::endl;
	}
	std::cout << "Test" << std::endl;
	*/
}
