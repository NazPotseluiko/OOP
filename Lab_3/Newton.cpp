#include "Newton.h"
#include <iostream>
#include <cmath>
using namespace std;

Newton::Newton(double x0_, double eps_, double (*f_)(double), double (*df_)(double)) {
    x0 = x0_;
    eps = eps_;
    f = f_;
    df = df_;
}

double Newton::solve() {
    double x = x0;
    double fx, dfx;
    int iter = 0;

    while (true) {
        fx = f(x);
        dfx = df(x);

        if (fabs(dfx) < 1e-10) {
            cout << "Derivative too small. Stopping.\n";
            return x;
        }

        double x1 = x - fx / dfx;

        if (fabs(x1 - x) < eps) break;

        x = x1;
        iter++;
        if (iter > 1000) {
            cout << "Too many iterations.\n";
            break;
        }
    }

    return x;
}
