//https://www.urionlinejudge.com.br/judge/pt/problems/view/1013
#include <bits/stdc++.h>
using namespace std;

int solution1()
{
    int A, B, C;
    cin >> A >> B >> C;
    int maior_AB = (A + B + abs(A-B))/2;
    int maior_ABC = (maior_AB + C + abs(maior_AB - C))/2;
    cout << maior_ABC << " eh o maior" << endl;

    return 0;
}

int solution2()
{
    int A, B, C;
    cin >> A >> B >> C;
    cout << max(max(A, B), C) << " eh o maior" << endl;

    return 0;
}

int main()
{
    solution1();
    return 0;
}