#pragma once


class SmallestMultiple
{
public:
	
	bool is_divisable(unsigned long long number, unsigned long long divisor)
	{
		return (number % divisor) == 0;
	}

	 


	unsigned long long get_smallest_multiple_between(unsigned long long start,
		unsigned long long end)
	{

		unsigned long long result = 1;

		while (is_number_multiple(result, start, end) == false)
		{
			result++;
		}


		return result;
	}


	bool is_number_multiple(unsigned long long number, 
		unsigned long long start,
		unsigned long long end)
	{
		for (unsigned long long i = start; i <= end;i++)
		{
			if (is_divisable(number, i) == false) return false;
		}

		return true;
	}



	  
};

