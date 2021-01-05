/*
문제
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 
등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. 
N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 

입력
첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.

출력
첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.
*/


#include <stdio.h>

int Han(int n);

void main()
{
    int input, res;
    scanf("%d", &input);
    res = Han(input);
    printf("%d", res);
}

int Han(int n)
{
    int i, cnt = 0, hund, ten, one;
    if (n < 100)
        return n;
    else{
        for (i = 100; i <= n; i++){
        hund = i/100;
         ten = (i%100)/10;
         one = (i%100)%10;
         if ((hund - ten) == (ten - one))
             cnt++;
        }        
        return (99+cnt);
    }
}
