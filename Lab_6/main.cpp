#include <iostream>
#include <cmath>
#include "Bisection.h"
#include "Newton.h"
using namespace std;

int main() {
    double a = 0, b = 2, eps = 1e-5;

    // Лямбда-функції
    auto f = [](double x) { return x * x / 4 + x - 1.2502; };
    auto df = [](double x) { return x / 2 + 1; };

    cout << "=== Dichotomy method ===" << endl;
    Bisection bisection(a, b, eps, f);
    double root1 = bisection.solve();
    cout << "Root (Bisection): " << root1 << endl;

    cout << "\n=== Newton method ===" << endl;
    double x0 = 1.0;
    Newton newton(x0, eps, f, df);
    double root2 = newton.solve();
    cout << "Root (Newton): " << root2 << endl;

    cout << "===Substitution===" << endl;
    cout << f(root1) << endl;
    cout << f(root2) << endl;

    return 0;
}
