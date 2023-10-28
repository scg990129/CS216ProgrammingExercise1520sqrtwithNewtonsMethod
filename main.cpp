#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double square_root(double x, double a, double tolerance =  0.0001);

int main() {
    int x;
    std::cin >> x;

    cout << setprecision(2) << fixed << square_root(x, x) << endl;

    return 0;
}

// https://www.geeksforgeeks.org/find-root-of-a-number-using-newtons-method/
double square_root(double x, double a, double tolerance) {
    return (abs( a * a - x) <= tolerance) ? a :
    square_root(x, (a * a + x) / (2 * a));
}