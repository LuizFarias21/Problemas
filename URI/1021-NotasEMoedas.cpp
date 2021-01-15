//https://www.urionlinejudge.com.br/judge/pt/problems/view/1021
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double valor_double;
    cin >> valor_double;
    int valor_int = (int)valor_double;
    int tmp_valor_int = (int)valor_double;

    cout << "NOTAS:" << endl;
    cout << valor_int/100 << " nota(s) de R$ 100.00" << endl;
    valor_int = valor_int % 100;

    cout << valor_int/50 << " nota(s) de R$ 50.00" << endl;
    valor_int = valor_int % 50;

    cout << valor_int/20 << " nota(s) de R$ 20.00" << endl;
    valor_int = valor_int % 20;

    cout << valor_int/10 << " nota(s) de R$ 10.00" << endl;
    valor_int = valor_int % 10;

    cout << valor_int/5 << " nota(s) de R$ 5.00" << endl;
    valor_int = valor_int % 5;

    cout << valor_int/2 << " nota(s) de R$ 2.00" << endl;
    valor_int = valor_int % 2;

    cout << "MOEDAS:" << endl;
    cout << valor_int << " moeda(s) de R$ 1.00" << endl;

    valor_double -= tmp_valor_int;
    valor_double = valor_double * 100;
    valor_int = (int) valor_double;

    cout << valor_int/50 << " moeda(s) de R$ 0.50" << endl;
    valor_int = valor_int % 50;

    cout << valor_int/25 << " moeda(s) de R$ 0.25" << endl;
    valor_int = valor_int % 25;

    cout << valor_int/10 << " moeda(s) de R$ 0.10" << endl;
    valor_int = valor_int % 10;

    cout << valor_int/5 << " moeda(s) de R$ 0.05" << endl;
    valor_int = valor_int % 5;

    cout << valor_int << " moeda(s) de R$ 0.01" << endl;

    return 0;
}