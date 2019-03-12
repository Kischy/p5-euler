// p5-euler.cpp
//

#include <iostream>

#include "SmallestMultiple.h"



int main(int argc, char **argv)
{
	unsigned long long p5_answ = 0;

	SmallestMultiple smallestmultiple;

	p5_answ = smallestmultiple.get_smallest_multiple_between(1, 20);


	std::cout << "The answer to the fifth problem of ProjectEuler.Net is " << p5_answ << ".\n";

	return 0;
}