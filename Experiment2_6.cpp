#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number;

	cout << "Input number: ";
			cin >> number;


			
		if (number > 0) 
	{
		
				int counter;
			int sum = 0;

		counter = 1;

			while ( counter <= number)
		{
		
			
			sum += counter;
			
			
			++counter;
		}

			cout << sum;
	}

		else
	{
			


		cout << "Thank you!";
	}	



	getch();
	return 0;
}


