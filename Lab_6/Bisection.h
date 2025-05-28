#ifndef BISECTION_H
#define BISECTION_H

#include <functional>
using namespace std;

class Bisection {
private:
    double a, b, eps;
    function<double(double)> f;

public:
    Bisection(double a_, double b_, double eps_, function<double(double)> f_);
    double solve();
};

#endif
