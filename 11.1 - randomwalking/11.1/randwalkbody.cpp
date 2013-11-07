#include <fstream> // всё работает, смотри проекты 11.1 файл "randwalk.txt"
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "randwalkhead.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    ofstream rwalk("randwalk.txt");
	double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
		rwalk << "Target Distance: " << target << ", Step Size: " << dstep << endl;
        rwalk << steps << ": (x,y) = " << result << endl;
		while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
			steps++;
			rwalk << steps << ": (x,y) = " << result << endl;
		}
        rwalk << "After " << steps << " steps, the subject "
            "has the following location:\n";
        rwalk << result;
		result.polar_mode();
        rwalk << " or\n" << result << endl;
        rwalk << "Average outward distance per step = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
		cout << "File is re-writed, look \"randwalk.txt\" to more information." << endl;
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
	system("pause");
    return 0; 
}
