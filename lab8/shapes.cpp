#include "shapes.h"
#include <math.h>
#include <iostream>

Rectangle::Rectangle(double h, double w)
{
    height_ = h;
    width_ = w;
}

double Shape::area()
{
    return height_ * width_;
}

double Shape::perimeter()
{
    return 2 * (height_ + width_);
}

double Shape::height()
{
    return height_;
}

double Shape::width()
{
    return width_;
}

void Shape::rotate()
{
    double temp = height_;
    height_ = width_;
    width_ = temp;
}

Square::Square(double side)
{
    height_ = side;
    width_ = side;
}


Circle::Circle(double radius)
{

    height_ = radius;
    width_ = radius;
}

double Circle::height()
{
    return height_*2;
}

double Circle::width()
{
    return height_*2;
}


double Circle::area()
{
    return 3.1415 * height_ * width_;
}

double Circle::perimeter()
{
    return 2 * 3.1415 * height_;
}



