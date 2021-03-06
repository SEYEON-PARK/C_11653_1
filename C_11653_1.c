/*
정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

첫째 줄에 정수 N (1 ≤ N ≤ 10,000,000)이 주어진다.

N의 소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력한다. N이 1인 경우 아무것도 출력하지 않는다.
*/

#include <stdio.h>

int main(void)
{
    int N; // 변수 선언
    scanf("%d", &N); // 사용자로부터 정수 입력받기
    
    if(N==1) // 만약 N이 1이라면
        return 0; // 0을 반환하고 프로그램 종료하기
    
    for(int j=2;j<=N;j++) // j가 2부터 N보다 작거나 같을 때까지 1씩 증가하며 반복
    {
        if(N%j==0) // 만약, N을 j로 나눈 나머지가 0이라면
        {
            printf("%d\n", j); // j 값 출력하기
            N/=j; // N에 N/j 값 저장하기
            j=1; // j에 1 저장하기
        }
    }
    
    return 0;

}
