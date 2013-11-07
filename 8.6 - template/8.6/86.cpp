#include <iostream>
#include <cstring>
#include <string>
using namespace std;
template<class T>
T maxn(T mas[], int n);
template<class T>
T* maxn(T* mas[], int n);
template <> char * maxn<char>(char * mas[], int n);
int main()
{
	int ro[6] = {3,6,7,1,7,9};
	double to[4] = { 4.5,6.7,2.1,9.14};
	char * str[5] = {"hello","bye","why you?","hop nanaynay","albibek"};
	cout << maxn(ro,6) << endl << maxn(to,4) << endl << maxn(str,5) << endl;
	system("pause");
	return 0;
}
template<class T>
T maxn(T mas[], int n)
{
	int i = 0;
	T max = 0;
	while(i < n)
	{
		max = max > mas[i]? max:mas[i];
		i++;
	}
	return max;
}
template <> char * maxn<char>(char * mas[], int n)
{
	string max = " ";
	int i = 0;
	while (i < n)
	{
		max = max.size() > strlen(mas[i]) ? max:mas[i];
		i++;
	}
	int j = 0;
	while (j < n )
	{
		if (max == mas[j])
			return mas[j];
		else j++;
	}
}