#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double S(const double x, const double eps, int& n, double& sum);
double A(const double x, const int n, double& a);

int main()
{
    double xp, xk, dx, x, eps, sum = 0;
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "----------------------------------" << endl;
    cout << "|" << setw(7) << "x|"
        << setw(11) << "e^(x^2)|"
        << setw(11) << "Sum|"
        << setw(4) << "n|" << endl;
    cout << "----------------------------------" << endl;

    for (x = xp; x <= xk; x += dx)
    {
        S(x, eps, n, sum);  

        cout << "|" << setw(6) << setprecision(2) << x << "|"
            << setw(10) << setprecision(3) << exp(x * x) << "|"
            << setw(10) << setprecision(3) << sum << "|"
            << setw(3) << n << "|" << endl;
    }
    cout << "----------------------------------" << endl;

    return 0;
}

double S(const double x, const double eps, int& n, double& sum)
{
    n = 0;
    double a = 1.0;  
    sum = a;

    do {
        n++;
        A(x, n, a);  
        sum += a;
    } while (abs(a) >= eps);
    return sum;
}
double A(const double x, const int n, double& a)
{
    double R = (x * x) / n;
    return a *= R;
}
