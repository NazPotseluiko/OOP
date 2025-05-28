#include "Bisection.h"
#include <iostream>
using namespace std;

Bisection::Bisection(double a_, double b_, double eps_, function<double(double)> f_)
    : a(a_), b(b_), eps(eps_), f(f_) {}

double Bisection::solve() {
    if (f(a) * f(b) >= 0) {
        cout << "No root in the interval [" << a << ", " << b << "]\n";
        return -1;
    }

    double c;
    while ((b - a) >= eps) {
        c = (a + b) / 2;
        if (f(c) == 0.0) break;
        else if (f(c) * f(a) < 0) b = c;
        else a = c;
    }

    return (a + b) / 2;
}
