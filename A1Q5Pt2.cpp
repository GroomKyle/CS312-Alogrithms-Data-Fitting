/* Kyle Groom
 * 9/15/2013
 */
#include <iostream>

using namespace std;

int SumCount;

int Fibbonacci( int n )
{
	if( n < 3 )
		return 1;
	else
	{
		int v1 = n-1;
		int v2 = n-2;

		SumCount++;
		return Fibbonacci(v1) + Fibbonacci(v2);
	}
};

int main( )
{
	int sizes[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 
				10, 11, 12, 13 ,14 , 15, 16, 17, 18, 19,
				20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 
				31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 
				41, 42, 43, 44, 45, 46, -1};

	int i = 0;
	while (true)
	{
		int n = sizes[i++];
		if( n== -1 )
			break;

		SumCount = 0;
		Fibbonacci( n );
		cout << n << ", " << SumCount << endl;
	}

	return 0;
}