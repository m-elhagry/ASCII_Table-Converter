#include<iostream>
using namespace std;
int main()
{
	char my_char, try_again = 'Y';
	int my_int, my_choise;
	while (try_again == 'Y' || try_again == 'y')
	{
		cout << "If You Want To Convert From Character to ASCIItable press 1 else press 2 :" << endl;
		cin >> my_choise;
		switch (my_choise)
		{
		case 1:
		{
				  cout << "Please Enter Your Character :" << endl;
				  cin >> my_char;
				  my_int = int(my_char);
				  cout << "Your Character Was " << my_char << endl;
				  cout << "His Number in ASCIItable is " << my_int << endl;
				  cout << "." << endl;
				  cout << "." << endl;
				  cout << "." << endl;
				  cout << "To continue Please press (Y / y)" << endl;
				  cin >> try_again;
				  if (try_again == 'Y' || try_again == 'y')
				  {
					  cout << "." << endl;
					  cout << "." << endl;
				  }
		}	break;
		case 2:
		{
				  cout << "Please Enter Your Number in ASCIItable :" << endl;
				  cin >> my_int;
				  my_char = char(my_int);
				  cout << "Your Number in ASCIItable Was " << my_int << endl;
				  cout << "His Character is " << my_char << endl;
				  cout << "." << endl;
				  cout << "." << endl;
				  cout << "." << endl;
				  cout << "To continue Please press (Y / y)" << endl;
				  cin >> try_again;
				  if (try_again == 'Y' || try_again == 'y')
				  {
					  cout << "." << endl;
					  cout << "." << endl;
				  }
		}	break;
		default:
		{
				   cout << "Pleas Press 1 or 2 \nto continue press press (Y / y)" << endl;
				   cin >> try_again;
				   if (try_again == 'Y' || try_again == 'Y')
				   {
					   cout << "." << endl;
					   cout << "." << endl;
				   }
		}
		}
	}
	return 0;
}