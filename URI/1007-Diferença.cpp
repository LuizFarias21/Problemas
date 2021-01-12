//https://www.urionlinejudge.com.br/judge/pt/problems/view/1007
#include <iostream>
 
using namespace std;
 
int main() {
 
    int A = 0, B = 0, C = 0, D = 0;
    cin >> A >> B >> C >> D;
    int DIFERENCA = A * B - C * D;
    cout << "DIFERENCA = " << DIFERENCA << endl;
 
    return 0;
}
