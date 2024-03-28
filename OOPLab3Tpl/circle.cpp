#include "circle.h"
#include <iostream>

Circle::Circle() {
    radius = 0; //defauls params
    color = "";
}

Circle::Circle(double r, std::string col)
{
    radius = r;
    color = col;
}

double Circle::square()
{
    return 3.14 * radius * radius;
}

double Circle::length()
{
    return 2 * 3.14 * radius;
}

void Circle::setRadius(const double r)
{
    if (r > 0) {
        radius = r;
    }
    else {
        std::cout << "Error! Radius must be > 0!" << std::endl;
    }
}

void Circle::setColor(const std::string c)
{
    color = c;
}

double Circle::getRadius()
{
    return radius;
}

std::string Circle::getColor()
{
    return color;
}
#pragma once
