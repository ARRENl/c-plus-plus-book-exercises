#include <iostream>
using namespace std;
int main()
{
	setlocale (LC_ALL, "rus");
	int n,i;
	struct car
	{
		char pr [14];
		int yr;
	};
	cout << "������� ����������� ��������� � �������? ";
	cin >> n;
	cin.get();
	car *kat = new car [n];
	for (i = 0 ; i < n ; i++)
	{
		cout << "\n���������� �" << i+1 <<": " << endl; 
		cout << endl << "������� �������������: ";
		cin.getline((kat+i)->pr,14);
		cout << "\n������� ��� �������: ";
		cin >> (kat+i)->yr;
		cin.get();
	}
	cout << "\n��� ���� ���������: " << endl;
	int j = 0;
	while ( j < n )
	{
		cout << (kat+j)->yr << "\t" << (kat+j)->pr << endl;
		j++;
	}
	delete [] kat;
	system("pause");
	return 0;
}