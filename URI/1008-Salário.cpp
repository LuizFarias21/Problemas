#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int number, hours;
	double salary;

	cin >> number >> hours >> salary;

	cout << "NUMBER = " << number << endl;
	cout << fixed << setprecision(2) << "SALARY = U$ " << salary * hours << endl;
 
    return 0;
}
