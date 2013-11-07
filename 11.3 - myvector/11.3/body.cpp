// эта тема считает количество шагов среднее минимальное и максимальное
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "head.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
	int N;
	int tryings[50];
	cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
		cout << "How many tryhard?(less than 50) ";
        if (!(cin >> N))
            break;
		for (int i = 0; i < N; i++)
		{
		 while (result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep, direction, Vector::POL);
				result = result + step;
			    steps++;
			}
			tryings[i] = steps;
			steps = 0;
			result.reset(0.0, 0.0);
		}
		long max = 0;
		long min = 0;
		long average = 0;
		for (int i = 0; i < N; i++)
		{
			max = tryings[i] > max? tryings[i] : max;
			if (min == 0)
				min = tryings[i];
			min = tryings[i] < min? tryings[i] : min;
			average += tryings[i];	
		}
		cout << "The subject has the following location:\n";
        cout << "Max steps = " << max << endl << "Min steps = " << min << endl << "Average steps all tryings = " << average/N << endl;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
	system("pause");
    return 0; 
}
