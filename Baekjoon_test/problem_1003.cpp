// Fail

#include <iostream>

using namespace std;

int Nzero;

int fibonacci(int n) 
{
    if (n == 0)
    {
        Nzero++;
        return 0;
    } else if (n == 1)
    {
        return 1;
    } else  return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int repeatN, Finput, None;
    
    cin >> repeatN;

    for(int i=0;i<repeatN;i++)  
    {
        Nzero = 0;
        cin >> Finput;

        if (Finput == 0)
        {
            Nzero = 1;
            None  = 0;
        } else
        {
            fibonacci(Finput);
            None = Finput-Nzero;
        }
        
        cout << Nzero <<" "<< None << endl;
    }

    return 0;
}