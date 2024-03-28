#include <iostream>
#include "circle.h"
#include "complexnumber.h"

int ComplexNumber::count = 0;

using namespace std;

void task1() {
    Circle A; // ��������� ��'���� ����� Circle � ����������� �� ������������� (default c-tor)
    cout << "Default circle: R = " << A.getRadius() << ", color: " << A.getColor() << endl;

    cout << "Setting color to black." << endl;
    // A.setColor("Black"); // ����� setColor �� ���������� � ���� Circle
    cout << "Setting negative radius" << endl;
    // A.setRadius(-5); // ����� setRadius �� ���������� � ���� Circle
    cout << "Setting radius to 10" << endl;
    // A.setRadius(10); // ����� setRadius �� ���������� � ���� Circle
    cout << "Circle A: R = " << A.getRadius() << ", color: " << A.getColor() << endl;
    Circle B(5, "Red"); // ��������� ��'���� ����� Circle � �����������
    cout << "Circle B: R = " << B.getRadius() << ", color: " << B.getColor() << endl;
    // cout << "Square: " << B.square() << ", length: " << B.length() << endl; // ������ square � length �� �������� � ���� Circle
}

void task2() {
    ComplexNumber::count = 0; // ����������� �������� ����� ����� ComplexNumber

    // ���������� ����� ComplexNumber
    ComplexNumber num1(2, 3);
    ComplexNumber num2(4, -5);
    ComplexNumber num3;
    num3.setValues(1, -1);

    cout << "Number of complex numbers created: " << ComplexNumber::count << endl;

    // �������� � ������������ �������
    ComplexNumber result = num1.add(num2);
    cout << "Sum: ";
    result.print();

    result = num1.subtract(num2);
    cout << "Difference: ";
    result.print();

    result = num1.multiply(num2);
    cout << "Product: ";
    result.print();

    result = num1.divide(num2);
    if (result.getState() == 1)
        cout << "Error: Division by zero." << endl;
    else
        cout << "Division: ";
    result.print();

    result = num1.divideByShort(0);
    if (result.getState() == 1)
        cout << "Error: Division by zero." << endl;
    else
        cout << "Division by short: ";
    result.print();

    cout << "Magnitude of num1: " << num1.magnitude() << endl;
    cout << "Is num1 equal to num2? " << (num1.isEqual(num2) ? "Yes" : "No") << endl;
    cout << "Is num1 greater than num2? " << (num1.isGreater(num2) ? "Yes" : "No") << endl;
    cout << "Is num1 less than num2? " << (num1.isLess(num2) ? "Yes" : "No") << endl;
}

// ������� ������� ��������
int main() {
    task1(); // ������ ������� ��� ��������� �������� 1
    task2(); // ������ ������� ��� ��������� �������� 2
    return 0;
}
