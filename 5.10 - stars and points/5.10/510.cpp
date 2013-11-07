#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "¬ведите количество строк: ";
	int n;
	cin >> n;
	cout << endl;
	int i = 1;
	int j = 0; 
	while (j < n)
	{
		while ((i+j) < n)
		{
			cout << ".";
			++i;
		}
		while ((n - i) != -1)
		{
			cout << "*";
			++i;
		}
		cout << endl;
		j++;
		i = 1;
	}
	cout << endl;
	system("pause");
	return 0;
}