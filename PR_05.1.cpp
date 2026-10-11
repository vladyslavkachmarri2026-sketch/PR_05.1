// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;

double f(const double a, const double b, const double c); // прототип
int main() 
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

    // Обчислення чисельника та знаменника за формулою 
    double result = (f(1, t + s, s) + f(t, s * t, 1)) / (1 + pow(f(s, 1, t), 2));

    cout << "Result = " << result << endl;

    return 0;
}

// Визначення функції f(a, b, c) = a * sin(b) + b * sin(a) + c^2
double f(const double a, const double b, const double c)
{
    return a * sin(b) + b * sin(a) + c * c;
}
