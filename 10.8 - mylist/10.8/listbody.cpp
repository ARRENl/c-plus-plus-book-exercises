#include "listhead.h"
#include <iostream>
#include <cctype>
int main()
{
	using namespace std;
	List qw;
	char ch;
	long we;
	cout << "Please enter A to add item in list,\n W to work with item from list, or Q to quit.\n";
	while (cin >> ch && toupper(ch) != 'Q')
	{
		while(cin.get() != '\n')
			continue;
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch(ch)
		{
		case 'A':
		case 'a': cout << "Enter a item number to add: ";
			cin >> we;
			if(qw.isfull())
				cout << "stack alredy full\n";
			else
				qw.push(we);
			break;
		case 'w':
		case 'W': if(qw.isempty())
					  cout << "stack alredy empty\n";
				  else
				  {
					  qw.work(we);
					  cout << "item #" << we << " ready to the work\n";
				  }
				  break;
		}
		cout << "Please enter A to add item,\n W to work with item, or Q to quit.\n";
	}
	cout << "Bye!\n";
	system("pause");
	return 0;
}