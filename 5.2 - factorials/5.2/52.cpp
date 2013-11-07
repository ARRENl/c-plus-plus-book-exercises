#include <iostream>
#include <array>
const int AS = 101;      
int main()
{
    std::array<long double, AS> factorials;
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < AS; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i < AS; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    system("pause");
	return 0;
}
