#include <iostream>
using namespace std;

class Factorial
{
public:
    Factorial() {}
    int calculate_factorial(int m)
    {
        if (m == 0 || m == 1)
        {
            return m;
        }
        else{
            return m*calculate_factorial(m - 1);
        }
        return 0;
    }
};

int main()
{
    system("cls");
    Factorial F;
    int a=F.calculate_factorial(5); //5x4x3x2x1=120
    cout << a;
}