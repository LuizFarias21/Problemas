//https://www.urionlinejudge.com.br/judge/pt/problems/view/1011
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double raio, pi = 3.14159;
    cin >> raio;
    double volume = (4.0/3) * pi * pow(raio, 3);
    cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;
    
    return 0;
}