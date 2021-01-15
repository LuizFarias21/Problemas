//https://www.urionlinejudge.com.br/judge/pt/problems/view/1002
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double area, raio, n = 3.14159;
    cin >> raio;
    area = n * pow(raio, 2);
    cout << fixed << setprecision(4) << "A=" <<  area << endl;

    return 0;
}