#ifndef NEWTON_H
#define NEWTON_H

class Newton {
private:
    double x0, eps;
    double (*f)(double);
    double (*df)(double);

public:
    Newton(double x0_, double eps_, double (*f_)(double), double (*df_)(double));
    double solve();
};

#endif
