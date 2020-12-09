/*
문제
피보나치 함수에서 N이 주어졌을 때, fibonacci(N)을 호출했을 때, 0과 1이 각각 몇 번 출력되는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다.
각 테스트 케이스는 한 줄로 이루어져 있고, N이 주어진다. N은 40보다 작거나 같은 자연수 또는 0이다.

출력
각 테스트 케이스마다 0이 출력되는 횟수와 1이 출력되는 횟수를 공백으로 구분해서 출력한다.
*/

/*
C++ Vector class를 사용하여 실행함.
Vector가 array보다 빠른듯함.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> Farray;

int fibonacci(int n) 
{
    if (n <= Farray.size()-1) return Farray[n];
    else
    {
        Farray.push_back(fibonacci(n-1) + fibonacci(n-2));
        return Farray[n];
    }
}

int main()
{
    int repeatN, Finput, Fresult;
    
    Farray.push_back(0);
    Farray.push_back(1);

    cin >> repeatN;
    
    for(int i=0;i<repeatN;i++)  
    {
        cin >> Finput;
        if(Finput==0)   cout << 1 <<" "<< 0 <<endl;
        else
        {            
            fibonacci(Finput);

            cout << Farray[Finput-1] <<" "<< Farray[Finput] << endl;
        }
    }

    return 0;
}