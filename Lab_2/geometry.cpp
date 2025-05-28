#include "geometry.h"
#include <cmath>

double distance(const Point &p1, const Point &p2) {
    return std::sqrt((p2.x - p1.x) * (p2.x - p1.x) +
                     (p2.y - p1.y) * (p2.y - p1.y));
}

static double triangleArea(const Point &a, const Point &b, const Point &c) {
    return std::fabs((a.x * (b.y - c.y) +
                      b.x * (c.y - a.y) +
                      c.x * (a.y - b.y)) / 2.0);
}

double Triangle::area() const {
    return triangleArea(A, B, C);
}

bool Triangle::isDegenerate() const {
    return area() < 1e-9;
}

bool Triangle::contains(const Point &P) const {
    double S = area();
    double S1 = triangleArea(A, B, P);
    double S2 = triangleArea(B, C, P);
    double S3 = triangleArea(C, A, P);

    return std::fabs(S - (S1 + S2 + S3)) < 1e-9;
}

bool Triangle::isOnEdge(const Point &P) const {
    return triangleArea(A, B, P) < 1e-9 ||
           triangleArea(B, C, P) < 1e-9 ||
           triangleArea(C, A, P) < 1e-9;
}
