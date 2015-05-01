/* Kyle Groom
 * 9/15/2013
 */

#include <iostream>

using namespace std;

int SumCount;

int mystery( int n )
{
	int k = 0;
	if ( n > 1 )
	{
		for( int i = 0; i <= n; i++)
		{
			k+=1;
			SumCount++;
		}

		mystery( (n*2) / 3 );
		mystery( (n*2) / 3 );

	}

	return k;
}

int main( )
{
	int sizes[] = {1, 10, 20, 30, 40, 50, 60, 70, 80, 90, 
			100, 200, 300, 400, 500, 600, 700, 800, 900,
			1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 
			10000, -1};

	int i = 0;
	while (true)
	{
		int n = sizes[i++];
		if( n== -1 )
			break;

		SumCount = 0;
		mystery( n );
		cout << n << ", " << SumCount << endl;
	}

	return 0;
}