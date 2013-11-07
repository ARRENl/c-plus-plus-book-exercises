#include "boshka.h"
int main()
{
	using std::cout;
	double Sales[SALES::QUARTERS] = {200.350, 350.200, 400.350, 250.400};
	SALES::Sales bo;
	SALES::Sales & ob = bo;
	SALES::Sales ba;
	SALES::Sales & ab = ba;
	cout << "Hello, time to do my job!\n";
	setSales(ob, Sales);
	setSales(ab);
	cout << "Now i show you what we got here!\n";
	showSales(ob);
	showSales(ab);
	cout << "Done, bye!\n";
	system("pause");
	return 0;
}