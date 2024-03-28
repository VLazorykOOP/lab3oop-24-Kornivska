#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

class ComplexNumber {
private:
    float re;
    float im;
    int state; //0 - no error, 1 - division by zero, 2 - null pointer

public:
    static int count; //static variable to count the number of objects

    int getState();

    //c-tor w/o parameters
    ComplexNumber();

    //ctor with one parameter
    ComplexNumber(float real, float imag);

    //ctor with type array
    ComplexNumber(float* arr);

    //destructor
    ~ComplexNumber();

    //setter function
    void setValues(float real, float imag);

    //getter functions
    float getReal() const;

    float getImaginary() const;

    //copy constructor
    ComplexNumber(const ComplexNumber& other);

    //assignment operator
    ComplexNumber& operator=(const ComplexNumber& other);

    //arithmetic operations
    ComplexNumber add(const ComplexNumber& other) const;
    ComplexNumber subtract(const ComplexNumber& other) const;
    ComplexNumber multiply(const ComplexNumber& other) const;
    ComplexNumber divide(const ComplexNumber& other) const;
    ComplexNumber divideByShort(short divisor) const;

    //magnitude of the complex number
    float magnitude() const;

    //comparison functions
    bool isEqual(const ComplexNumber& other) const;
    bool isGreater(const ComplexNumber& other) const;
    bool isLess(const ComplexNumber& other) const;

    //print function
    void print() const;
};

#endif // COMPLEXNUMBER_H
#pragma once
