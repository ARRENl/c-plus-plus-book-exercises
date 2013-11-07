#include "boshka.h"
namespace SALES
{
	void setSales(Sales & s, const double ar[], int n)
{
	double total = 0;
	double max = 0;
	double min = 0;
	for (int i = 0; i < n; i++)
	{
		max = ar[i] > max? ar[i]:max;
		total += ar[i];
		if (min == 0)
			min = ar[i];
		min = ar[i] < min? ar[i]:min;
	}
	s.average = total/n;
	s.max = max;
	s.min = min;
	s.sales[0] = min;
}
	void setSales(Sales & s)
{
	int times = 0;
	double total = 0;
	double max = 0;
	double min = 0;
	double n = 0;
	std::cin.clear();
	std::cout << "Enter Sales 4 QUARTERS(any simbol or signed number or \"q\" for exit)\n#1:";
	std::cin >> n;
	while (std::cin && n > 0 && n != 'q')
	{
		times++;
		max = n > max? n:max;
		if (min == 0)
			min = n;
		min = n < min? n:min;
		total += n;
		std::cout << "#" << times+1 << ": ";
		std::cin >> n;
	}
	s.average = total/times;
	s.max = max;
	s.min = min;
	s.sales[0] = min;
}
	void showSales(const Sales & s)
{
	using std::cout;
	using std::endl;
	cout << "Max number: " << s.max << "\tMin number: " << s.min << "\tAverage betwens numbers: " << s.average << "\tDon't know what this number mean ... but: " << s.sales[0] << endl;
}
}