//https://www.urionlinejudge.com.br/judge/pt/problems/view/1006
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;
    double media = ((A * 2) + (B * 3) + (C * 5))/10;
    cout << fixed << setprecision(1) << "MEDIA = " << media << endl;

    return 0;
}