#ifndef SALES_H_
#define SALES_H_
#include <iostream>
namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	void setSales(Sales & s, const double ar[], int n = 4);
	void setSales(Sales & s);
	void showSales(const Sales & s);
}
#endif