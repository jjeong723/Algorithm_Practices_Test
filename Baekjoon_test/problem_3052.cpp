/*
문제
수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 
그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

입력
첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다. 
이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.

출력
첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.
*/

/*
본 문제의 답은 맞췄지만, Vector를 사용하는 것보다 간단한 방법이 있음을 상기하고자 문제 풀이를 찾아 넣음.
출처 : https://aorica.tistory.com/41

#include <iostream>
int main(void){
    int num, sum = 0, remainderArr[42] = {0,};
    for(int i = 0; i < 10; i++){
        std::cin>>num;
        if(!remainderArr[num % 42]++)
            sum++;
    }
    std::cout<<sum;
}
*/


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int inputN;
    vector<int> Vrest;

    for(int i=0;i<10;i++)
    {
        cin >> inputN;
        Vrest.push_back(inputN%42);
    }

    cout << "FSize : " << Vrest.size() << endl;

    int Fnum, num=0;

    for(int i=0;i<10;i++)
    {
        cout << "Size : " << Vrest.size() << endl;

        Fnum = Vrest[0];
        Vrest.erase(Vrest.begin());
        num++;
        for(int j=0;j<Vrest.size();j++)
        {
            if(Vrest[j]==Fnum)
            {
                Vrest.erase(Vrest.begin()+j);
                j--;
            }
        }
        if(Vrest.empty())   break;
    }
    cout << num << endl;
    return 0;
}