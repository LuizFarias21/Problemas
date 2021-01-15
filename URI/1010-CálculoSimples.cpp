//https://www.urionlinejudge.com.br/judge/pt/problems/view/1010
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cod_peca1, num_peca1, cod_peca2, num_peca2;
    double valor1, valor2;
    cin >> cod_peca1 >> num_peca1 >> valor1 >> cod_peca2 >> num_peca2 >> valor2;
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " 
    << num_peca1 * valor1 + num_peca2 * valor2 << endl;

    return 0;
}