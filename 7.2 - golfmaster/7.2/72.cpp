#include <iostream>
using namespace std;
const int sz = 10;
int vvod(int [], int);
void otobr(const int [], int);
void srednee(const int [], int);
int main()
{
	int golf[sz];
	int max = vvod(golf, sz);
	int n;
	if (!cin)
	{
		cin.clear();
		while( cin.get() != '\n');
	}
	otobr(golf, max);
	srednee(golf, max);
	cout << "Done!" << endl;
	system("pause");
	return 0;
}
int vvod(int ar[], int m)
{
	cout << "Hello golfmaster, enter your " << sz << " scores down here (any letter to quit)\n";
	int n;
	int i = 0;
	cout << "#" << i + 1 << ": ";
	while ( cin >> n && n != 0 && n > 0 && cin.good() )
	{
		ar[i] = n;
		i++;
		cout << "#" << i + 1 << ": ";
	}
	return i;
}
void otobr(const int ar[], int m)
{
	cout << "Now i will show you your score!\n";
	for (int i = 0; i < m; i++)
	{
		cout << "#" << i + 1 << ":" << ar[i] << endl;
	}
	cout << "This is all what i have for you!\n";
}
void srednee(const int ar[], int m)
{
	long all = 0;
	for (int i = 0; i < m; i++)
	{
		all += ar[i];
		
	}
	all = all/m;
	cout << "By the way... here middle arifmetical of your score: " << all << endl;
}