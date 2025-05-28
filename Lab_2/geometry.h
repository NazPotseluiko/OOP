#ifndef GEOMETRY_H
#define GEOMETRY_H

struct Point {
    double x, y;
};

struct Triangle {
    Point A, B, C;

    double area() const;
    bool isDegenerate() const;
    bool contains(const Point &P) const;
    bool isOnEdge(const Point &P) const;
};

double distance(const Point &p1, const Point &p2);

#endif
