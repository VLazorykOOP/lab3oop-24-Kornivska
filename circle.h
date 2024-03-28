#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>

class Circle {
private:
    double radius;
    std::string color;

public:
    //1
    Circle(); //default constructor
    Circle(double r, std::string col); //c-tor with params

    //2
    double square();
    double length();

    //3
    void setRadius(const double r);
    void setColor(const std::string c);

    //4
    double getRadius();
    std::string getColor();

};

#endif // CIRCLE_H
