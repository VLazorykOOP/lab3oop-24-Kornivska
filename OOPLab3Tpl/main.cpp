#include <iostream>
#include "circle.h"
#include "complexnumber.h"

int ComplexNumber::count = 0;

using namespace std;

void task1() {
    Circle A; // Створення об'єкту класу Circle з параметрами за замовчуванням (default c-tor)
    cout << "Default circle: R = " << A.getRadius() << ", color: " << A.getColor() << endl;

    cout << "Setting color to black." << endl;
    // A.setColor("Black"); // Метод setColor не визначений у класі Circle
    cout << "Setting negative radius" << endl;
    // A.setRadius(-5); // Метод setRadius не визначений у класі Circle
    cout << "Setting radius to 10" << endl;
    // A.setRadius(10); // Метод setRadius не визначений у класі Circle
    cout << "Circle A: R = " << A.getRadius() << ", color: " << A.getColor() << endl;
    Circle B(5, "Red"); // Створення об'єкту класу Circle з параметрами
    cout << "Circle B: R = " << B.getRadius() << ", color: " << B.getColor() << endl;
    // cout << "Square: " << B.square() << ", length: " << B.length() << endl; // Методи square і length не визначені у класі Circle
}

void task2() {
    ComplexNumber::count = 0; // Ініціалізація статичної змінної класу ComplexNumber

    // Тестування класу ComplexNumber
    ComplexNumber num1(2, 3);
    ComplexNumber num2(4, -5);
    ComplexNumber num3;
    num3.setValues(1, -1);

    cout << "Number of complex numbers created: " << ComplexNumber::count << endl;

    // Операції з комплексними числами
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

// Головна функція програми
int main() {
    task1(); // Виклик функції для виконання завдання 1
    task2(); // Виклик функції для виконання завдання 2
    return 0;
}
