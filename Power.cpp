#include <iostream>
using namespace std;

class Power
{
public:
    Power() {}
    double calculate_Power(double base,int power)
    {
        if (power==0)
        {
            return 1;
        }
        else if (power == 1 ){
            return base;
        }
        else{
            return base*calculate_Power(base, power - 1);
        }
        
    }
};

int main()
{
    system("cls");
    Power F;
    double a=F.calculate_Power(8.12,2); //5x4x3x2x1=120
    cout << a;
}