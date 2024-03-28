#include "complexnumber.h"
#include <cmath>
#include <iostream>

// Constructors
int ComplexNumber::getState()
{
    return state;
}

ComplexNumber::ComplexNumber() {
    re = 0;
    im = 0;
    state = 0;
    count++;
}

ComplexNumber::ComplexNumber(float real, float imag) {
    re = real;
    im = imag;
    state = 0;
    count++;
}

ComplexNumber::ComplexNumber(float* arr) {
    state = 0;
    if (arr == nullptr) {
        state = 2; //null pointer error
    }
    else {
        re = arr[0];
        im = arr[1];
    }
    count++;
}

ComplexNumber::~ComplexNumber() {
    std::cout << "Complex number object is being destroyed." << std::endl;
    count--;
}

void ComplexNumber::setValues(float real = 0, float imag = 0) {
    re = real;
    im = imag;
}

float ComplexNumber::getReal() const {
    return re;
}

float ComplexNumber::getImaginary() const {
    return im;
}

ComplexNumber::ComplexNumber(const ComplexNumber& other) {
    re = other.re;
    im = other.im;
    state = other.state;
    count++;
}

ComplexNumber& ComplexNumber::operator=(const ComplexNumber& other) {
    if (this != &other) {
        re = other.re;
        im = other.im;
        state = other.state;
    }
    return *this;
}

ComplexNumber ComplexNumber::add(const ComplexNumber& other) const {
    return ComplexNumber(re + other.re, im + other.im);
}

ComplexNumber ComplexNumber::subtract(const ComplexNumber& other) const {
    return ComplexNumber(re - other.re, im - other.im);
}

ComplexNumber ComplexNumber::multiply(const ComplexNumber& other) const {
    return ComplexNumber(re * other.re - im * other.im, re * other.im + im * other.re);
}

ComplexNumber ComplexNumber::divide(const ComplexNumber& other) const {
    if (other.re == 0 && other.im == 0) {
        ComplexNumber result;
        result.state = 1; //division by zero error
        return result;
    }
    float denominator = other.re * other.re + other.im * other.im;
    float realPart = (re * other.re + im * other.im) / denominator;
    float imagPart = (im * other.re - re * other.im) / denominator;
    return ComplexNumber(realPart, imagPart);
}

ComplexNumber ComplexNumber::divideByShort(short divisor) const {
    if (divisor == 0) {
        ComplexNumber result;
        result.state = 1; //division by zero error
        return result;
    }
    return ComplexNumber(re / divisor, im / divisor);
}

float ComplexNumber::magnitude() const {
    return sqrt(re * re + im * im);
}

bool ComplexNumber::isEqual(const ComplexNumber& other) const {
    return re == other.re && im == other.im;
}

bool ComplexNumber::isGreater(const ComplexNumber& other) const {
    return magnitude() > other.magnitude();
}

bool ComplexNumber::isLess(const ComplexNumber& other) const {
    return magnitude() < other.magnitude();
}

void ComplexNumber::print() const {
    std::cout << re << " + " << im << "i" << std::endl;
}
#pragma once
