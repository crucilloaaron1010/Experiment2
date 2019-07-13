#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << " Package A: For P995/mo 10hrs of access are provided. Additional hours are P20/hr. \n";
		cout << " Package B: For P1495/mo 20hrs of access are provided. Additional hours are P10/hr. \n";
			cout << " Package C: For P1995/mo unlimited of access is provided. \n\n";

	char Ans;
	int Hours;
	cout << "Type of Package purchased: ";
		cin >> Ans;

	switch (Ans)
	{
	case 'a' :
	case 'A' :
		cout << "\n";
		cout << "Access used (Number of Hours): ";
			cin >> Hours;

		if (Hours <= 10)

			cout << "Amount due (Total: P995"; 



		else if (Hours > 10)



			cout << "Amount due (Total): " << (995 + (Hours-10)*20) ;



		else 
			cout << "!INPUT INVALID!";




		break;

	case 'b' :
	case 'B' :
		cout << "\n";
		cout << "Hours of access used: ";
		cin >> Hours;

		if (Hours <= 20)
			cout << "Total amount due: P1495"; 
		else if (Hours > 20)
			cout << "Total amount due: " << (1495 + (Hours-20)*10) ;
		else 
			cout << "INVALID";

		break;

	case 'c' :
	case 'C' :
		cout << "\n";
		cout << "Hours of access used: ";
		cin >> Hours;

		cout << "Total amount due: P1995" ;

		break;

	default:
		cout << "You must only choose from packages A,B, and C. \n";

	}


	getch();
	return 0;
}




