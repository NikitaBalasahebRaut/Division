
#include "Header.h"

double Division(int no1 , int no2)
{
	double ans = 0.0;
	
	if(no2 == 0)
	{
		return 0.0;
	}
	ans = (double)no1 / (double)no2;
	return ans;
}