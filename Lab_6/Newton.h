#ifndef NEWTON_H
#define NEWTON_H

#include <functional>
using namespace std;

class Newton {
private:
    double x0, eps;
    function<double(double)> f;
    function<double(double)> df;

public:
    Newton(double x0_, double eps_, function<double(double)> f_, function<double(double)> df_);
    double solve();
};

#endif
