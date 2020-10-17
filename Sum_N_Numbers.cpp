    #include <iostream>
    using namespace std;

    class Sum
    {
    public:
        Sum() {}
        int calculate_Sum(int m)
        {
            if (m == 0 || m == 1)
            {
                return m;
            }
            else{
                return m+calculate_Sum(m - 1);
            }
            return 0;
        }
    };

    int main()
    {
        
        system("cls");
        Sum S;
        int sum=S.calculate_Sum(5); 
        cout << sum;//5 => 5+4+3+2+1=15
    }