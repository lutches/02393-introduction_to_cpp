#include "vector2d.h"
#include <cmath>

v2d::v2d(double a, double b)
{
    x = a;
    y = b;
}

v2d::v2d(const v2d &v)
{
    x = v.x;
    y = v.y;
}

v2d::~v2d()
{
    // delete this;
}

v2d &v2d::operator=(const v2d &v)
{
    x = v.x;
    y = v.y;
}

v2d &v2d::operator+(const v2d &v)
{
    x += v.x;
    y += v.y;
}

double v2d::operator*(const v2d &v)
{
    return x * v.x + y * v.y;
}

v2d &v2d::operator*(double k)
{
    y *= k;
    x *= k;
}

double v2d::length()
{
    return sqrt(x * x + y * y);
}
