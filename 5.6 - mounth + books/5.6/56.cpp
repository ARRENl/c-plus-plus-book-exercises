#include <iostream>
#include <string>
using namespace std;
int main ()
{
	int m12 [3][12];
	int sum [3];
	int C = 0;
	string ms [12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
	for (int j = 0 ; j < 3 ; j++)
	{
	for ( int i = 0 ; i < 12 ; i++)
	{
		cout << "Now enter kol-vo books sold in year " << j+1 << " in month " << ms[i] << " right here, bro ___!\b\b\b\b";
		cin >> m12 [j][i];
		C = C + m12[j][i];
		sum [j] = C;
	}
		C = 0;
	}
	cout << endl << "How lets look how much books we sold in this year in total " << sum[0] << " + year 2 " << sum[1] << " + year 3 " << sum[2] << " Hm, good, how much in total? OH ITS - " << sum[0] + sum[1] + sum[2] << endl << "Wow! ... is much, i'll buy new car! YO-HO-HO-HO-HO-HO" << endl;
	system("pause");
	return 0;
}
