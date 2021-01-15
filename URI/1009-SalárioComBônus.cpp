//https://www.urionlinejudge.com.br/judge/pt/problems/view/1009
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string nome;
    double salario, montante;
    cin >> nome >> salario >> montante;
    cout << fixed << setprecision(2) << "TOTAL = R$ " << salario + (0.15 * montante) << endl;

    return 0;
}