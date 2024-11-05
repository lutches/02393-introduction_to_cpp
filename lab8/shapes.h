#ifndef __Shape__
#define __Shape__

class Shape
{
public:
    virtual double height();
    virtual double width();
    virtual double area();
    virtual double perimeter();
    void rotate();

protected:
    double height_;
    double width_;
};

class Rectangle : public Shape
{
public:
    Rectangle(double h, double w);

};

class Square : public Shape
{
public:
    Square(double side);


};

class Circle : public Shape
{
public:
    Circle(double radius);
    double height();
    double width();
    double area();
    double perimeter();

};

#endif