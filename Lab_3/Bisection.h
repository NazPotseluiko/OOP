#ifndef BISECTION_H
#define BISECTION_H

class Bisection {
private:
    double a, b, eps;
    double (*f)(double);

public:
    Bisection(double a_, double b_, double eps_, double (*f_)(double));
    double solve();
};

#endif
