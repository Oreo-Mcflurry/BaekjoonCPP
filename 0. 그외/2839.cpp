#include <iostream>
using namespace std;

// 무조건 5로 나누는게 좋은게 아님, 틀릴수도 있다. 5와 3으로 나누는걸 적절히 다 해봐야함. (브루트포스)
// 그렇다면 n을 받고 5와 3으로 나눈 몫을 for로 돌려서 -1이 아니면서 가장 적은 수를 뽑아내야한다.

// 풀리지 않은 의문: 가장 적은 봉지수를 출력해야해서, 따로 if를 걸어줘야 한다거나, 그래야 할줄 알았는데 그냥 테스트용으로 넣어보니 통과됨.
// 반례는 정말 없는걸까?

// i가 높을수록 봉지수가 적은게 맞다. 18을 예로 들어보았을떄
// 3키로 6개로 6이라는 답이 나올 수도 있지만, 5키로 3개와 3키로 한개로 4개가 나옴.

int main() {
    int n;
    cin >> n;
    
    int result = -1;

    for(int i=0;i<=n/5;i++) {
        for(int j=0;j<=n/3;j++){
            if(n == i*5 + j*3) {
                result = i + j;
            }
        }
    }

    cout << result;
}