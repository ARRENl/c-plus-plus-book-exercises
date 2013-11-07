#include <iostream>
const int size = 30;
const int kol = 5;
using namespace std;
int main()
{
	struct bop
	{
		char fullname[size];
		char title[size];
		char bopname[size];
		int preference;
	};
	bop n[kol] = { "Wimp Macho", "Junior Programmer", "Misha", 0 , "Raki Rhodes", "Cleaner", "Vasya",1 , "Celia Laiter", "Killer", "Natasha",2 , "Hoppy Hipman", "Shaman", "Grisha",0 , "Pat Hand", "Doctor", "Igor",};
	cout << "Benevolent Order of Programmers Report\n" << "a. display by name\tb. display by title\nc. display by bopname\td. display by preference\nq. quit\nEnter your choice: ";
	char m;
	int j;
	cin.get(m).get();
	m = tolower(m);
	while (m != 'q')
	{
		switch (m)
		{
			case 'a': cout << n[0].fullname << endl << n[1].fullname << endl << n[2].fullname << endl << n[3].fullname << endl << n[4].fullname << endl;
				break;
			case 'b': cout << n[0].title << endl << n[1].title << endl << n[2].title << endl << n[3].title << endl << n[4].title << endl;
				break;
			case 'c': cout << n[0].bopname << endl << n[1].bopname << endl << n[2].bopname << endl << n[3].bopname << endl << n[4].bopname;
				break;
			case 'd': for ( j = 0; j < kol; j++)
					  {
						  switch (n[j].preference)
						  {
							 case 0: cout << n[j].fullname << endl;
							     break;
							 case 1: cout << n[j].title << endl;
								 break;
							 case 2: cout << n[j].bopname << endl;
								 break;
						  }	
					  }
				break;
			default: cout << "Wrong choice! Try again.\n";
						 break;
		}
		cin.get(m).get();
		m = tolower(m);
	}
	cout << "Bye!\n";
	system ("pause");
	return 0;
}
